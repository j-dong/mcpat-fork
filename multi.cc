#include "processor.h"
#include "core.h"
#include "sharedcache.h"
#include "memoryctrl.h"
#include "serialize.h"

#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cerr;
using std::endl;
using std::string;

std::ifstream *inF;

void handle_core(system_core *core);
void handle_core_predictor(predictor_systemcore *pred);
void handle_core_BTB(BTB_systemcore *btb);
void handle_core_itlb(itlb_systemcore *itlb);
void handle_core_dtlb(dtlb_systemcore *dtlb);
void handle_core_icache(icache_systemcore *icache);
void handle_core_dcache(dcache_systemcore *dcache);
void handle_l1d(system_L1Directory *l1d);
void handle_l2d(system_L2Directory *l2d);
void handle_l2(system_L2 *l2);
void handle_l3(system_L3 *l3);
void handle_mem(system_mem *l3);


int main(int argc, char **argv) {
    if (argc != 3) {
        cerr << "usage: " << argv[0] << " FILENAME DYNFILE" << endl;
        return 1;
    }

    if (strcmp("ser", argv[2]) == 0) {
        cout << "SERIALIZATION TEST MODE";
        char *fn = argv[1];
        ParseXML *xml = new ParseXML();
        cout << ("parsing XML...\n");
        xml->parse(fn);
        cout << ("initializing...\n");
        Processor proc(xml);
        cout << ("energy:\n");
        proc.displayEnergy(2, 5);
        return 0;
    }

    if (strcmp("des", argv[2]) == 0) {
        cout << "DESERIALIZATION TEST MODE";
        Processor *proc = deserialize(argv[1]);
        proc->displayEnergy(2, 5);
        return 0;
    }

    char *fn = argv[1];
    char *dynf = argv[2];
    ParseXML *xml = new ParseXML();
    cout << ("parsing XML...\n");
    xml->parse(fn);
    cout << ("initializing...\n");
    Processor proc(xml);
    cout << ("energy:\n");
    proc.displayEnergy(2, 5);

    cout << "--- BEGIN DYNAMIC" << endl;
    inF = new std::ifstream(dynf);

    while (inF->good()) {
        string command;
        (*inF) >> command;
        if (command == "total_cycles") {
            double x;
            (*inF) >> x;
            cout << "total_cycles " << x << endl;
            xml->sys.total_cycles = x;
            // proc.set_proc_param();
            // set execution time
            for (int i = 0; i < proc.cores.size(); i++) {
                cout << "- resetting params for core " << i << endl;
                proc.cores[i]->set_core_param();
                cout << "- done: core " << i << endl;
            }
            cout << "- done resetting params" << endl;
        }
        if (command == "core") {
            int i; (*inF) >> i;
            cout << "core " << i << endl;
            handle_core(&xml->sys.core[i]);
        }
        if (command == "l2") {
            int i; (*inF) >> i;
            cout << "l2 " << i << endl;
            handle_l2(&xml->sys.L2[i]);
        }
        if (command == "l3") {
            int i; (*inF) >> i;
            cout << "l3 " << i << endl;
            handle_l3(&xml->sys.L3[i]);
        }
        if (command == "l1d") {
            int i; (*inF) >> i;
            cout << "l1d " << i << endl;
            handle_l1d(&xml->sys.L1Directory[i]);
        }
        if (command == "l2d") {
            int i; (*inF) >> i;
            cout << "l2d " << i << endl;
            handle_l2d(&xml->sys.L2Directory[i]);
        }
        if (command == "mem") {
            cout << "mem" << endl;
            handle_mem(&xml->sys.mem);
        }
        if (command == "output") {
            cout << "output" << endl;
            cout << endl;

            cout << "- computing" << endl;
            proc.compute();

            cout << "BEGIN OUTPUT" << endl;
            proc.displayEnergy(2, 5);
            cout << "END OUTPUT" << endl;
            cout << endl;
        }
        if (command == "done") {
            cout << "done - exiting" << endl;
            break;
        }
    }

    delete inF;
    delete xml;
    return 0;
}

#define LOOP for (string CMD; (((*inF) >> CMD), CMD != "done"); )
#define LOOPEND cout << "done" << endl
#define DBL(field) do { if (CMD == #field) { \
    double x; (*inF) >> x; \
    cout << #field " " << x << endl; \
    X->field = x; } } while (0)
#define DELEGATE(pref, field) do { if (CMD == #field) { \
    cout << #field << endl; \
    pref##field(&X->field); } } while (0)

void handle_core(system_core *X) { LOOP {
    DBL(total_instructions);
    DBL(int_instructions);
    DBL(fp_instructions);
    DBL(branch_instructions);
    DBL(branch_mispredictions);
    DBL(committed_instructions);
    DBL(committed_int_instructions);
    DBL(committed_fp_instructions);
    DBL(load_instructions);
    DBL(store_instructions);
    DBL(total_cycles);
    DBL(idle_cycles);
    DBL(busy_cycles);
    DBL(instruction_buffer_reads);
    DBL(instruction_buffer_write);
    DBL(ROB_reads);
    DBL(ROB_writes);
    DBL(rename_accesses);
    DBL(fp_rename_accesses);
    DBL(rename_reads);
    DBL(rename_writes);
    DBL(fp_rename_reads);
    DBL(fp_rename_writes);
    DBL(inst_window_reads);
    DBL(inst_window_writes);
    DBL(inst_window_wakeup_accesses);
    DBL(inst_window_selections);
    DBL(fp_inst_window_reads);
    DBL(fp_inst_window_writes);
    DBL(fp_inst_window_wakeup_accesses);
    DBL(fp_inst_window_selections);
    DBL(archi_int_regfile_reads);
    DBL(archi_float_regfile_reads);
    DBL(phy_int_regfile_reads);
    DBL(phy_float_regfile_reads);
    DBL(phy_int_regfile_writes);
    DBL(phy_float_regfile_writes);
    DBL(archi_int_regfile_writes);
    DBL(archi_float_regfile_writes);
    DBL(int_regfile_reads);
    DBL(float_regfile_reads);
    DBL(int_regfile_writes);
    DBL(float_regfile_writes);
    DBL(windowed_reg_accesses);
    DBL(windowed_reg_transports);
    DBL(function_calls);
    DBL(context_switches);
    DBL(ialu_accesses);
    DBL(fpu_accesses);
    DBL(mul_accesses);
    DBL(cdb_alu_accesses);
    DBL(cdb_mul_accesses);
    DBL(cdb_fpu_accesses);
    DBL(load_buffer_reads);
    DBL(load_buffer_writes);
    DBL(load_buffer_cams);
    DBL(store_buffer_reads);
    DBL(store_buffer_writes);
    DBL(store_buffer_cams);
    DBL(store_buffer_forwards);
    DBL(main_memory_access);
    DBL(main_memory_read);
    DBL(main_memory_write);
    DBL(pipeline_duty_cycle);
    DELEGATE(handle_core_, predictor);
    DELEGATE(handle_core_, itlb);
    DELEGATE(handle_core_, icache);
    DELEGATE(handle_core_, dtlb);
    DELEGATE(handle_core_, dcache);
    DELEGATE(handle_core_, BTB);
} LOOPEND; }

void handle_core_predictor(predictor_systemcore *X) { LOOP {
    DBL(predictor_accesses);
} LOOPEND; }

void handle_core_BTB(BTB_systemcore *X) { LOOP {
    DBL(total_accesses);
    DBL(read_accesses);
    DBL(write_accesses);
    DBL(total_hits);
    DBL(total_misses);
    DBL(read_hits);
    DBL(write_hits);
    DBL(read_misses);
    DBL(write_misses);
    DBL(replacements);
} LOOPEND; }

void handle_core_itlb(itlb_systemcore *X) { LOOP {
    DBL(total_hits);
    DBL(total_accesses);
    DBL(total_misses);
    DBL(conflicts);
} LOOPEND; }

void handle_core_dtlb(dtlb_systemcore *X) { LOOP {
    DBL(total_accesses);
    DBL(read_accesses);
    DBL(write_accesses);
    DBL(write_hits);
    DBL(read_hits);
    DBL(read_misses);
    DBL(write_misses);
    DBL(total_hits);
    DBL(total_misses);
    DBL(conflicts);
} LOOPEND; }

void handle_core_icache(icache_systemcore *X) { LOOP {
    DBL(total_accesses);
    DBL(read_accesses);
    DBL(read_misses);
    DBL(replacements);
    DBL(read_hits);
    DBL(total_hits);
    DBL(total_misses);
    DBL(miss_buffer_access);
    DBL(fill_buffer_accesses);
    DBL(prefetch_buffer_accesses);
    DBL(prefetch_buffer_writes);
    DBL(prefetch_buffer_reads);
    DBL(prefetch_buffer_hits);
    DBL(conflicts);
} LOOPEND; }

void handle_core_dcache(dcache_systemcore *X) { LOOP {
    DBL(total_accesses);
    DBL(read_accesses);
    DBL(write_accesses);
    DBL(total_hits);
    DBL(total_misses);
    DBL(read_hits);
    DBL(write_hits);
    DBL(read_misses);
    DBL(write_misses);
    DBL(replacements);
    DBL(write_backs);
    DBL(miss_buffer_access);
    DBL(fill_buffer_accesses);
    DBL(prefetch_buffer_accesses);
    DBL(prefetch_buffer_writes);
    DBL(prefetch_buffer_reads);
    DBL(prefetch_buffer_hits);
    DBL(wbb_writes);
    DBL(wbb_reads);
    DBL(conflicts);
} LOOPEND; }

void handle_l1d(system_L1Directory *X) { LOOP {
    DBL(total_accesses);
    DBL(read_accesses);
    DBL(write_accesses);
    DBL(read_misses);
    DBL(write_misses);
    DBL(conflicts);
    DBL(duty_cycle);
} LOOPEND; }

void handle_l2d(system_L2Directory *X) { LOOP {
    DBL(total_accesses);
    DBL(read_accesses);
    DBL(write_accesses);
    DBL(read_misses);
    DBL(write_misses);
    DBL(conflicts);
    DBL(duty_cycle);
} LOOPEND; }

void handle_l2(system_L2 *X) { LOOP {
    DBL(total_accesses);
    DBL(read_accesses);
    DBL(write_accesses);
    DBL(total_hits);
    DBL(total_misses);
    DBL(read_hits);
    DBL(write_hits);
    DBL(read_misses);
    DBL(write_misses);
    DBL(replacements);
    DBL(write_backs);
    DBL(miss_buffer_accesses);
    DBL(fill_buffer_accesses);
    DBL(prefetch_buffer_accesses);
    DBL(prefetch_buffer_writes);
    DBL(prefetch_buffer_reads);
    DBL(prefetch_buffer_hits);
    DBL(wbb_writes);
    DBL(wbb_reads);
    DBL(conflicts);
    DBL(duty_cycle);

    DBL(homenode_read_accesses);
    DBL(homenode_write_accesses);
    DBL(homenode_read_hits);
    DBL(homenode_write_hits);
    DBL(homenode_read_misses);
    DBL(homenode_write_misses);
    DBL(dir_duty_cycle);
} LOOPEND; }

void handle_l3(system_L3 *X) { LOOP {
    DBL(total_accesses);
    DBL(read_accesses);
    DBL(write_accesses);
    DBL(total_hits);
    DBL(total_misses);
    DBL(read_hits);
    DBL(write_hits);
    DBL(read_misses);
    DBL(write_misses);
    DBL(replacements);
    DBL(write_backs);
    DBL(miss_buffer_accesses);
    DBL(fill_buffer_accesses);
    DBL(prefetch_buffer_accesses);
    DBL(prefetch_buffer_writes);
    DBL(prefetch_buffer_reads);
    DBL(prefetch_buffer_hits);
    DBL(wbb_writes);
    DBL(wbb_reads);
    DBL(conflicts);
    DBL(duty_cycle);

    DBL(homenode_read_accesses);
    DBL(homenode_write_accesses);
    DBL(homenode_read_hits);
    DBL(homenode_write_hits);
    DBL(homenode_read_misses);
    DBL(homenode_write_misses);
    DBL(dir_duty_cycle);
} LOOPEND; }

void handle_mem(system_mem *X) { LOOP {
    DBL(memory_accesses);
    DBL(memory_reads);
    DBL(memory_writes);
} LOOPEND; }
