// vim: set ft=cpp:

#ifndef FORWARD_DECLS


/*
location: XML_Parse.h:524|9
parents: XML_Parse.h
*/
template<>
struct serdes<system_pcie> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(0)))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const system_pcie &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_units, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_channels, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.withPHY, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_load_perc, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(system_pcie &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_units, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_channels, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.withPHY, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_load_perc, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:512|9
parents: XML_Parse.h
*/
template<>
struct serdes<system_niu> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(0)))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const system_niu &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_units, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_load_perc, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(system_niu &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_units, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_load_perc, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:480|9
parents: XML_Parse.h
*/
template<>
struct serdes<system_mc> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<bool>(alignadd<int>(alignadd<double>(0))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<double>::align), serdes<int>::align), serdes<bool>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const system_mc &x, size_t p, ser_reg &reg) {
        serdes<double>::ser(x.peak_transfer_rate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.number_mcs, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.withPHY, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_load_perc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.mc_clock, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.llc_line_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.memory_channels_per_mc, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_ranks, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.req_window_size_per_channel, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.IO_buffer_size_per_channel, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.databus_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.addressbus_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.LVDS, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.memory_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.memory_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.memory_writes, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(system_mc &x, const uint8_t *p, des_reg &reg) {
        serdes<double>::des(x.peak_transfer_rate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.number_mcs, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.withPHY, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_load_perc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.mc_clock, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.llc_line_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.memory_channels_per_mc, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_ranks, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.req_window_size_per_channel, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.IO_buffer_size_per_channel, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.databus_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.addressbus_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.LVDS, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.memory_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.memory_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.memory_writes, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:462|9
parents: XML_Parse.h
*/
template<>
struct serdes<system_mem> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(0))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const system_mem &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.mem_tech_node, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.device_clock, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.peak_transfer_rate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.internal_prefetch_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.capacity_per_channel, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_ranks, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_banks_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Block_width_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.output_width_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.page_size_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.burstlength_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.memory_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.memory_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.memory_writes, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(system_mem &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.mem_tech_node, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.device_clock, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.peak_transfer_rate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.internal_prefetch_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.capacity_per_channel, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_ranks, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_banks_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Block_width_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.output_width_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.page_size_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.burstlength_of_DRAM_chip, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.memory_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.memory_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.memory_writes, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:422|9
parents: XML_Parse.h
*/
template<>
struct serdes<xbar0_systemNoC> {
    static constexpr size_t size = alignadd<double>(alignadd<int ([20])>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(0))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int ([20])>::align), serdes<double>::align);

    static void ser(const xbar0_systemNoC &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.number_of_inputs_of_crossbars, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_of_outputs_of_crossbars, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.flit_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.input_buffer_entries_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::ser(x.ports_of_input_buffer, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<double>::ser(x.crossbar_accesses, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(xbar0_systemNoC &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.number_of_inputs_of_crossbars, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_of_outputs_of_crossbars, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.flit_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.input_buffer_entries_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::des(x.ports_of_input_buffer, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<double>::des(x.crossbar_accesses, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:432|9
parents: XML_Parse.h
*/
template<>
struct serdes<system_NoC> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<xbar0_systemNoC>(alignadd<char ([20])>(alignadd<char ([20])>(alignadd<int>(alignadd<int>(alignadd<int ([20])>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<char ([20])>(alignadd<bool>(alignadd<bool>(alignadd<int>(0))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<bool>::align), serdes<bool>::align), serdes<char ([20])>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int ([20])>::align), serdes<int>::align), serdes<int>::align), serdes<char ([20])>::align), serdes<char ([20])>::align), serdes<xbar0_systemNoC>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const system_NoC &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.type, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.has_global_link, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<char ([20])>::ser(x.topology, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int>::ser(x.horizontal_nodes, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.vertical_nodes, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.link_throughput, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.link_latency, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.input_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.output_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.virtual_channel_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.flit_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.input_buffer_entries_per_vc, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::ser(x.ports_of_input_buffer, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::ser(x.dual_pump, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_of_crossbars, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::ser(x.crossbar_type, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<char ([20])>::ser(x.crosspoint_type, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<xbar0_systemNoC>::ser(x.xbar0, p = ::align<xbar0_systemNoC>(p), reg); p = add<xbar0_systemNoC>(p);
        serdes<int>::ser(x.arbiter_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.chip_coverage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.route_over_perc, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(system_NoC &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.type, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.has_global_link, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<char ([20])>::des(x.topology, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int>::des(x.horizontal_nodes, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.vertical_nodes, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.link_throughput, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.link_latency, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.input_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.output_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.virtual_channel_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.flit_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.input_buffer_entries_per_vc, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::des(x.ports_of_input_buffer, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::des(x.dual_pump, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_of_crossbars, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::des(x.crossbar_type, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<char ([20])>::des(x.crosspoint_type, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<xbar0_systemNoC>::des(x.xbar0, p = ::align<xbar0_systemNoC>(p), reg); p = add<xbar0_systemNoC>(p);
        serdes<int>::des(x.arbiter_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.chip_coverage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.route_over_perc, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:379|9
parents: XML_Parse.h
*/
template<>
struct serdes<system_L3> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int ([20])>(alignadd<char ([20])>(alignadd<int>(alignadd<int>(alignadd<int ([20])>(alignadd<int>(alignadd<double ([20])>(0))))))))))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<double ([20])>::align), serdes<int>::align), serdes<int ([20])>::align), serdes<int>::align), serdes<int>::align), serdes<char ([20])>::align), serdes<int ([20])>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const system_L3 &x, size_t p, ser_reg &reg) {
        serdes<double ([20])>::ser(x.L3_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int>::ser(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::ser(x.ports, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::ser(x.device_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::ser(x.threeD_stack, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int ([20])>::ser(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.replacements, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_backs, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.miss_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fill_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wbb_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wbb_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.merged_dir, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.homenode_read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.homenode_write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.homenode_read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.homenode_write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.homenode_read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.homenode_write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.dir_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(system_L3 &x, const uint8_t *p, des_reg &reg) {
        serdes<double ([20])>::des(x.L3_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int>::des(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::des(x.ports, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::des(x.device_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::des(x.threeD_stack, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int ([20])>::des(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.replacements, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_backs, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.miss_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fill_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wbb_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wbb_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.merged_dir, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.homenode_read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.homenode_write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.homenode_read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.homenode_write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.homenode_read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.homenode_write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.dir_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:336|9
parents: XML_Parse.h
*/
template<>
struct serdes<system_L2> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int ([20])>(alignadd<char ([20])>(alignadd<int>(alignadd<int>(alignadd<int ([20])>(alignadd<int>(alignadd<double ([20])>(0))))))))))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<double ([20])>::align), serdes<int>::align), serdes<int ([20])>::align), serdes<int>::align), serdes<int>::align), serdes<char ([20])>::align), serdes<int ([20])>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const system_L2 &x, size_t p, ser_reg &reg) {
        serdes<double ([20])>::ser(x.L2_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int>::ser(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::ser(x.ports, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::ser(x.device_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::ser(x.threeD_stack, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int ([20])>::ser(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.replacements, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_backs, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.miss_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fill_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wbb_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wbb_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.merged_dir, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.homenode_read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.homenode_write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.homenode_read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.homenode_write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.homenode_read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.homenode_write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.dir_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(system_L2 &x, const uint8_t *p, des_reg &reg) {
        serdes<double ([20])>::des(x.L2_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int>::des(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::des(x.ports, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::des(x.device_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::des(x.threeD_stack, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int ([20])>::des(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.replacements, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_backs, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.miss_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fill_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wbb_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wbb_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.merged_dir, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.homenode_read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.homenode_write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.homenode_read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.homenode_write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.homenode_read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.homenode_write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.dir_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:315|9
parents: XML_Parse.h
*/
template<>
struct serdes<system_L2Directory> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<char ([20])>(alignadd<int>(alignadd<int>(alignadd<int ([20])>(alignadd<int>(alignadd<int ([20])>(alignadd<double ([20])>(alignadd<int>(0)))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<double ([20])>::align), serdes<int ([20])>::align), serdes<int>::align), serdes<int ([20])>::align), serdes<int>::align), serdes<int>::align), serdes<char ([20])>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const system_L2Directory &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.Directory_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double ([20])>::ser(x.Dir_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int ([20])>::ser(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::ser(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::ser(x.ports, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::ser(x.device_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::ser(x.threeD_stack, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(system_L2Directory &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.Directory_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double ([20])>::des(x.Dir_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int ([20])>::des(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::des(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::des(x.ports, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::des(x.device_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::des(x.threeD_stack, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:294|9
parents: XML_Parse.h
*/
template<>
struct serdes<system_L1Directory> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<char ([20])>(alignadd<int>(alignadd<int>(alignadd<int ([20])>(alignadd<int>(alignadd<int ([20])>(alignadd<double ([20])>(alignadd<int>(0)))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<double ([20])>::align), serdes<int ([20])>::align), serdes<int>::align), serdes<int ([20])>::align), serdes<int>::align), serdes<int>::align), serdes<char ([20])>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const system_L1Directory &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.Directory_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double ([20])>::ser(x.Dir_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int ([20])>::ser(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::ser(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::ser(x.ports, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::ser(x.device_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::ser(x.threeD_stack, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(system_L1Directory &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.Directory_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double ([20])>::des(x.Dir_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int ([20])>::des(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::des(x.clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::des(x.ports, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::des(x.device_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::des(x.threeD_stack, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:138|9
parents: XML_Parse.h
*/
template<>
struct serdes<BTB_systemcore> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int ([20])>(0)))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int ([20])>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const BTB_systemcore &x, size_t p, ser_reg &reg) {
        serdes<int ([20])>::ser(x.BTB_config, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<double>::ser(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.replacements, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(BTB_systemcore &x, const uint8_t *p, des_reg &reg) {
        serdes<int ([20])>::des(x.BTB_config, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<double>::des(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.replacements, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:111|9
parents: XML_Parse.h
*/
template<>
struct serdes<dcache_systemcore> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int ([20])>(alignadd<double ([20])>(0)))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<double ([20])>::align), serdes<int ([20])>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const dcache_systemcore &x, size_t p, ser_reg &reg) {
        serdes<double ([20])>::ser(x.dcache_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int ([20])>::ser(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::ser(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.replacements, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_backs, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.miss_buffer_access, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fill_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wbb_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wbb_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(dcache_systemcore &x, const uint8_t *p, des_reg &reg) {
        serdes<double ([20])>::des(x.dcache_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int ([20])>::des(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::des(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.replacements, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_backs, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.miss_buffer_access, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fill_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wbb_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wbb_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:95|9
parents: XML_Parse.h
*/
template<>
struct serdes<dtlb_systemcore> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(0))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const dtlb_systemcore &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.number_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(dtlb_systemcore &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.number_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:74|9
parents: XML_Parse.h
*/
template<>
struct serdes<icache_systemcore> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int ([20])>(alignadd<double ([20])>(0)))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<double ([20])>::align), serdes<int ([20])>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const icache_systemcore &x, size_t p, ser_reg &reg) {
        serdes<double ([20])>::ser(x.icache_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int ([20])>::ser(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::ser(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.replacements, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.miss_buffer_access, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fill_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.prefetch_buffer_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(icache_systemcore &x, const uint8_t *p, des_reg &reg) {
        serdes<double ([20])>::des(x.icache_config, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<int ([20])>::des(x.buffer_sizes, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::des(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.replacements, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.miss_buffer_access, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fill_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.prefetch_buffer_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:66|9
parents: XML_Parse.h
*/
template<>
struct serdes<itlb_systemcore> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(0))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const itlb_systemcore &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.number_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(itlb_systemcore &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.number_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.cache_policy, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.total_hits, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_misses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.conflicts, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:53|9
parents: XML_Parse.h
*/
template<>
struct serdes<predictor_systemcore> {
    static constexpr size_t size = alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int ([20])>(alignadd<int>(alignadd<int>(alignadd<char ([20])>(alignadd<int>(0)))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<char ([20])>::align), serdes<int>::align), serdes<int>::align), serdes<int ([20])>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align);

    static void ser(const predictor_systemcore &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.prediction_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::ser(x.prediction_scheme, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int>::ser(x.predictor_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.predictor_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::ser(x.local_predictor_size, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::ser(x.local_predictor_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.global_predictor_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.global_predictor_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.chooser_predictor_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.chooser_predictor_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.predictor_accesses, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(predictor_systemcore &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.prediction_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::des(x.prediction_scheme, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int>::des(x.predictor_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.predictor_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::des(x.local_predictor_size, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int>::des(x.local_predictor_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.global_predictor_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.global_predictor_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.chooser_predictor_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.chooser_predictor_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.predictor_accesses, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: XML_Parse.h:153|9
parents: XML_Parse.h
*/
template<>
struct serdes<system_core> {
    static constexpr size_t size = alignadd<BTB_systemcore>(alignadd<dcache_systemcore>(alignadd<dtlb_systemcore>(alignadd<icache_systemcore>(alignadd<itlb_systemcore>(alignadd<predictor_systemcore>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<char ([20])>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<char ([20])>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<int>(alignadd<char ([20])>(alignadd<char ([20])>(alignadd<int ([20])>(alignadd<int ([20])>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<bool>(alignadd<bool>(alignadd<int>(0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<bool>::align), serdes<bool>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int ([20])>::align), serdes<int ([20])>::align), serdes<char ([20])>::align), serdes<char ([20])>::align), serdes<int>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<char ([20])>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<char ([20])>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<predictor_systemcore>::align), serdes<itlb_systemcore>::align), serdes<icache_systemcore>::align), serdes<dtlb_systemcore>::align), serdes<dcache_systemcore>::align), serdes<BTB_systemcore>::align);

    static void ser(const system_core &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.clock_rate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.opt_local, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.x86, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.machine_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.virtual_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.physical_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.opcode_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.micro_opcode_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.instruction_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.machine_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.internal_datapath_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_hardware_threads, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.fetch_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_instruction_fetch_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.decode_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.issue_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.peak_issue_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.commit_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::ser(x.pipelines_per_core, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int ([20])>::ser(x.pipeline_depth, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<char ([20])>::ser(x.FPU, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<char ([20])>::ser(x.divider_multiplier, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int>::ser(x.ALU_per_core, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.FPU_per_core, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.MUL_per_core, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.instruction_buffer_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.decoded_stream_buffer_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.instruction_window_scheme, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.instruction_window_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.fp_instruction_window_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.ROB_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.archi_Regs_IRF_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.archi_Regs_FRF_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.phy_Regs_IRF_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.phy_Regs_FRF_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.rename_scheme, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.checkpoint_depth, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.register_windows_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::ser(x.LSU_order, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int>::ser(x.store_buffer_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.load_buffer_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.memory_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::ser(x.Dcache_dual_pump, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int>::ser(x.RAS_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.fp_issue_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.prediction_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_of_BTB, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_of_BPT, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.total_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.int_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fp_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.branch_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.branch_mispredictions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.committed_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.committed_int_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.committed_fp_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.load_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.store_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.idle_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.busy_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.instruction_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.instruction_buffer_write, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.ROB_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.ROB_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.rename_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fp_rename_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.rename_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.rename_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fp_rename_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fp_rename_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.inst_window_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.inst_window_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.inst_window_wakeup_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.inst_window_selections, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fp_inst_window_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fp_inst_window_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fp_inst_window_wakeup_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fp_inst_window_selections, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.archi_int_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.archi_float_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.phy_int_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.phy_float_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.phy_int_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.phy_float_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.archi_int_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.archi_float_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.int_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.float_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.int_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.float_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.windowed_reg_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.windowed_reg_transports, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.function_calls, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.context_switches, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.ialu_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fpu_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.mul_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cdb_alu_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cdb_mul_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cdb_fpu_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.load_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.load_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.load_buffer_cams, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.store_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.store_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.store_buffer_cams, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.store_buffer_forwards, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.main_memory_access, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.main_memory_read, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.main_memory_write, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.pipeline_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.IFU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.BR_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.LSU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.MemManU_I_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.MemManU_D_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.ALU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.MUL_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.FPU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.ALU_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.MUL_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.FPU_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<predictor_systemcore>::ser(x.predictor, p = ::align<predictor_systemcore>(p), reg); p = add<predictor_systemcore>(p);
        serdes<itlb_systemcore>::ser(x.itlb, p = ::align<itlb_systemcore>(p), reg); p = add<itlb_systemcore>(p);
        serdes<icache_systemcore>::ser(x.icache, p = ::align<icache_systemcore>(p), reg); p = add<icache_systemcore>(p);
        serdes<dtlb_systemcore>::ser(x.dtlb, p = ::align<dtlb_systemcore>(p), reg); p = add<dtlb_systemcore>(p);
        serdes<dcache_systemcore>::ser(x.dcache, p = ::align<dcache_systemcore>(p), reg); p = add<dcache_systemcore>(p);
        serdes<BTB_systemcore>::ser(x.BTB, p = ::align<BTB_systemcore>(p), reg); p = add<BTB_systemcore>(p);
    }
    static void des(system_core &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.clock_rate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.opt_local, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.x86, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.machine_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.virtual_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.physical_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.opcode_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.micro_opcode_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.instruction_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.machine_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.internal_datapath_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_hardware_threads, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.fetch_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_instruction_fetch_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.decode_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.issue_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.peak_issue_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.commit_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int ([20])>::des(x.pipelines_per_core, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<int ([20])>::des(x.pipeline_depth, p = ::align<int ([20])>(p), reg); p = add<int ([20])>(p);
        serdes<char ([20])>::des(x.FPU, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<char ([20])>::des(x.divider_multiplier, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int>::des(x.ALU_per_core, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.FPU_per_core, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.MUL_per_core, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.instruction_buffer_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.decoded_stream_buffer_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.instruction_window_scheme, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.instruction_window_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.fp_instruction_window_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.ROB_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.archi_Regs_IRF_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.archi_Regs_FRF_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.phy_Regs_IRF_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.phy_Regs_FRF_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.rename_scheme, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.checkpoint_depth, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.register_windows_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::des(x.LSU_order, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int>::des(x.store_buffer_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.load_buffer_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.memory_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<char ([20])>::des(x.Dcache_dual_pump, p = ::align<char ([20])>(p), reg); p = add<char ([20])>(p);
        serdes<int>::des(x.RAS_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.fp_issue_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.prediction_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_of_BTB, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_of_BPT, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.total_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.int_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fp_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.branch_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.branch_mispredictions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.committed_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.committed_int_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.committed_fp_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.load_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.store_instructions, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.idle_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.busy_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.instruction_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.instruction_buffer_write, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.ROB_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.ROB_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.rename_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fp_rename_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.rename_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.rename_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fp_rename_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fp_rename_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.inst_window_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.inst_window_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.inst_window_wakeup_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.inst_window_selections, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fp_inst_window_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fp_inst_window_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fp_inst_window_wakeup_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fp_inst_window_selections, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.archi_int_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.archi_float_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.phy_int_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.phy_float_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.phy_int_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.phy_float_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.archi_int_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.archi_float_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.int_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.float_regfile_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.int_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.float_regfile_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.windowed_reg_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.windowed_reg_transports, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.function_calls, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.context_switches, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.ialu_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fpu_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.mul_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cdb_alu_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cdb_mul_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cdb_fpu_accesses, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.load_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.load_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.load_buffer_cams, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.store_buffer_reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.store_buffer_writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.store_buffer_cams, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.store_buffer_forwards, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.main_memory_access, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.main_memory_read, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.main_memory_write, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.pipeline_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.IFU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.BR_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.LSU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.MemManU_I_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.MemManU_D_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.ALU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.MUL_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.FPU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.ALU_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.MUL_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.FPU_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<predictor_systemcore>::des(x.predictor, p = ::align<predictor_systemcore>(p), reg); p = add<predictor_systemcore>(p);
        serdes<itlb_systemcore>::des(x.itlb, p = ::align<itlb_systemcore>(p), reg); p = add<itlb_systemcore>(p);
        serdes<icache_systemcore>::des(x.icache, p = ::align<icache_systemcore>(p), reg); p = add<icache_systemcore>(p);
        serdes<dtlb_systemcore>::des(x.dtlb, p = ::align<dtlb_systemcore>(p), reg); p = add<dtlb_systemcore>(p);
        serdes<dcache_systemcore>::des(x.dcache, p = ::align<dcache_systemcore>(p), reg); p = add<dcache_systemcore>(p);
        serdes<BTB_systemcore>::des(x.BTB, p = ::align<BTB_systemcore>(p), reg); p = add<BTB_systemcore>(p);
    }
};

/*
location: XML_Parse.h:538|9
parents: XML_Parse.h
*/
template<>
struct serdes<root_system> {
    static constexpr size_t size = alignadd<system_pcie>(alignadd<system_niu>(alignadd<system_mc>(alignadd<system_mc>(alignadd<system_mem>(alignadd<system_NoC ([64])>(alignadd<system_L3 ([64])>(alignadd<system_L2 ([64])>(alignadd<system_L2Directory ([64])>(alignadd<system_L1Directory ([64])>(alignadd<system_core ([64])>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(0))))))))))))))))))))))))))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<system_core ([64])>::align), serdes<system_L1Directory ([64])>::align), serdes<system_L2Directory ([64])>::align), serdes<system_L2 ([64])>::align), serdes<system_L3 ([64])>::align), serdes<system_NoC ([64])>::align), serdes<system_mem>::align), serdes<system_mc>::align), serdes<system_mc>::align), serdes<system_niu>::align), serdes<system_pcie>::align);

    static void ser(const root_system &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.number_of_cores, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_of_L1Directories, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_of_L2Directories, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_of_L2s, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.Private_L2, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.number_of_L3s, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_of_NoCs, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_of_dir_levels, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.domain_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.first_level_dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.homogeneous_cores, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.homogeneous_L1Directories, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.homogeneous_L2Directories, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.core_tech_node, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.target_core_clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.target_chip_area, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.temperature, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_cache_levels, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.L1_property, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.L2_property, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.homogeneous_L2s, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.L3_property, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.homogeneous_L3s, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.homogeneous_NoCs, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.homogeneous_ccs, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Max_area_deviation, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Max_power_deviation, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.device_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.longer_channel_device, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.power_gating, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.Embedded, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.opt_dynamic_power, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.opt_lakage_power, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.opt_clockrate, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.opt_area, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.interconnect_projection_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.machine_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.virtual_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.physical_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.virtual_memory_page_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.total_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<system_core ([64])>::ser(x.core, p = ::align<system_core ([64])>(p), reg); p = add<system_core ([64])>(p);
        serdes<system_L1Directory ([64])>::ser(x.L1Directory, p = ::align<system_L1Directory ([64])>(p), reg); p = add<system_L1Directory ([64])>(p);
        serdes<system_L2Directory ([64])>::ser(x.L2Directory, p = ::align<system_L2Directory ([64])>(p), reg); p = add<system_L2Directory ([64])>(p);
        serdes<system_L2 ([64])>::ser(x.L2, p = ::align<system_L2 ([64])>(p), reg); p = add<system_L2 ([64])>(p);
        serdes<system_L3 ([64])>::ser(x.L3, p = ::align<system_L3 ([64])>(p), reg); p = add<system_L3 ([64])>(p);
        serdes<system_NoC ([64])>::ser(x.NoC, p = ::align<system_NoC ([64])>(p), reg); p = add<system_NoC ([64])>(p);
        serdes<system_mem>::ser(x.mem, p = ::align<system_mem>(p), reg); p = add<system_mem>(p);
        serdes<system_mc>::ser(x.mc, p = ::align<system_mc>(p), reg); p = add<system_mc>(p);
        serdes<system_mc>::ser(x.flashc, p = ::align<system_mc>(p), reg); p = add<system_mc>(p);
        serdes<system_niu>::ser(x.niu, p = ::align<system_niu>(p), reg); p = add<system_niu>(p);
        serdes<system_pcie>::ser(x.pcie, p = ::align<system_pcie>(p), reg); p = add<system_pcie>(p);
    }
    static void des(root_system &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.number_of_cores, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_of_L1Directories, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_of_L2Directories, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_of_L2s, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.Private_L2, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.number_of_L3s, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_of_NoCs, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_of_dir_levels, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.domain_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.first_level_dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.homogeneous_cores, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.homogeneous_L1Directories, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.homogeneous_L2Directories, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.core_tech_node, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.target_core_clockrate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.target_chip_area, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.temperature, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_cache_levels, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.L1_property, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.L2_property, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.homogeneous_L2s, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.L3_property, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.homogeneous_L3s, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.homogeneous_NoCs, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.homogeneous_ccs, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Max_area_deviation, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Max_power_deviation, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.device_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.longer_channel_device, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.power_gating, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.Embedded, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.opt_dynamic_power, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.opt_lakage_power, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.opt_clockrate, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.opt_area, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.interconnect_projection_type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.machine_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.virtual_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.physical_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.virtual_memory_page_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.total_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<system_core ([64])>::des(x.core, p = ::align<system_core ([64])>(p), reg); p = add<system_core ([64])>(p);
        serdes<system_L1Directory ([64])>::des(x.L1Directory, p = ::align<system_L1Directory ([64])>(p), reg); p = add<system_L1Directory ([64])>(p);
        serdes<system_L2Directory ([64])>::des(x.L2Directory, p = ::align<system_L2Directory ([64])>(p), reg); p = add<system_L2Directory ([64])>(p);
        serdes<system_L2 ([64])>::des(x.L2, p = ::align<system_L2 ([64])>(p), reg); p = add<system_L2 ([64])>(p);
        serdes<system_L3 ([64])>::des(x.L3, p = ::align<system_L3 ([64])>(p), reg); p = add<system_L3 ([64])>(p);
        serdes<system_NoC ([64])>::des(x.NoC, p = ::align<system_NoC ([64])>(p), reg); p = add<system_NoC ([64])>(p);
        serdes<system_mem>::des(x.mem, p = ::align<system_mem>(p), reg); p = add<system_mem>(p);
        serdes<system_mc>::des(x.mc, p = ::align<system_mc>(p), reg); p = add<system_mc>(p);
        serdes<system_mc>::des(x.flashc, p = ::align<system_mc>(p), reg); p = add<system_mc>(p);
        serdes<system_niu>::des(x.niu, p = ::align<system_niu>(p), reg); p = add<system_niu>(p);
        serdes<system_pcie>::des(x.pcie, p = ::align<system_pcie>(p), reg); p = add<system_pcie>(p);
    }
};

/*
location: XML_Parse.h:598|7
parents: XML_Parse.h
*/
template<>
struct serdes<ParseXML> {
    static constexpr size_t size = alignadd<root_system>(0);
    static constexpr size_t align = std::max((size_t) 1, serdes<root_system>::align);

    static void ser(const ParseXML &x, size_t p, ser_reg &reg) {
        serdes<root_system>::ser(x.sys, p = ::align<root_system>(p), reg); p = add<root_system>(p);
    }
    static void des(ParseXML &x, const uint8_t *p, des_reg &reg) {
        serdes<root_system>::des(x.sys, p = ::align<root_system>(p), reg); p = add<root_system>(p);
    }
};

/*
location: basic_components.h:264|7
parents: basic_components.h
*/
template<>
struct serdes<PCIeParam> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<std::basic_string<char>>(0))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<std::basic_string<char>>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const PCIeParam &x, size_t p, ser_reg &reg) {
        serdes<std::basic_string<char>>::ser(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.num_channels, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_units, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.withPHY, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.perc_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(PCIeParam &x, const uint8_t *p, des_reg &reg) {
        serdes<std::basic_string<char>>::des(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.num_channels, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_units, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.withPHY, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.perc_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: basic_components.h:250|7
parents: basic_components.h
*/
template<>
struct serdes<NIUParam> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<std::basic_string<char>>(0))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<std::basic_string<char>>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const NIUParam &x, size_t p, ser_reg &reg) {
        serdes<std::basic_string<char>>::ser(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.num_units, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.perc_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(NIUParam &x, const uint8_t *p, des_reg &reg) {
        serdes<std::basic_string<char>>::des(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.num_units, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.perc_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: basic_components.h:238|7
parents: basic_components.h
*/
template<>
struct serdes<ProcParam> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<std::basic_string<char>>(0)))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<std::basic_string<char>>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const ProcParam &x, size_t p, ser_reg &reg) {
        serdes<std::basic_string<char>>::ser(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<int>::ser(x.numCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numL2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numL3, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numNOC, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numL1Dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numL2Dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numMC, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numMCChannel, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.homoCore, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.homoL2, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.homoL3, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.homoNOC, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.homoL1Dir, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.homoL2Dir, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(ProcParam &x, const uint8_t *p, des_reg &reg) {
        serdes<std::basic_string<char>>::des(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<int>::des(x.numCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numL2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numL3, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numNOC, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numL1Dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numL2Dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numMC, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numMCChannel, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.homoCore, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.homoL2, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.homoL3, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.homoNOC, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.homoL1Dir, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.homoL2Dir, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: basic_components.h:220|7
parents: basic_components.h
*/
template<>
struct serdes<NoCParam> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<std::basic_string<char>>(0)))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<std::basic_string<char>>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const NoCParam &x, size_t p, ser_reg &reg) {
        serdes<std::basic_string<char>>::ser(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.flit_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.input_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.output_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.min_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.global_linked_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.virtual_channel_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.input_buffer_entries_per_vc, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.horizontal_nodes, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.vertical_nodes, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.total_nodes, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_access, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.link_throughput, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.link_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_coverage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.route_over_perc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.has_global_link, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.type, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(NoCParam &x, const uint8_t *p, des_reg &reg) {
        serdes<std::basic_string<char>>::des(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.flit_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.input_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.output_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.min_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.global_linked_ports, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.virtual_channel_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.input_buffer_entries_per_vc, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.horizontal_nodes, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.vertical_nodes, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.total_nodes, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_access, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.link_throughput, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.link_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_coverage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.route_over_perc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.has_global_link, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.type, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: basic_components.h:198|7
parents: basic_components.h
*/
template<>
struct serdes<MCParam> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<std::basic_string<char>>(0))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<std::basic_string<char>>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const MCParam &x, size_t p, ser_reg &reg) {
        serdes<std::basic_string<char>>::ser(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.num_mcs, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.peakDataTransferRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.num_channels, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.llcBlockSize, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.dataBusWidth, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.addressBusWidth, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.opcodeW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.memAccesses, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.memRank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.frontend_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.perc_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.LVDS, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.withPHY, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(MCParam &x, const uint8_t *p, des_reg &reg) {
        serdes<std::basic_string<char>>::des(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.num_mcs, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.peakDataTransferRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.num_channels, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.llcBlockSize, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.dataBusWidth, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.addressBusWidth, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.opcodeW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.memAccesses, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.memRank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.type, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.frontend_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.perc_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.reads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.writes, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.LVDS, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.withPHY, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: basic_components.h:181|7
parents: basic_components.h
*/
template<>
struct serdes<CacheDynParam> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<unsigned int>(alignadd<std::basic_string<char>>(0))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<std::basic_string<char>>::align), serdes<unsigned int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const CacheDynParam &x, size_t p, ser_reg &reg) {
        serdes<std::basic_string<char>>::ser(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.dir_ty); p = add<unsigned int>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.capacity, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.blockW, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.assoc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.nbanks, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.throughput, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.dir_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.missb_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.fu_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.prefetchb_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.wbb_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(CacheDynParam &x, const uint8_t *p, des_reg &reg) {
        serdes<std::basic_string<char>>::des(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        x.dir_ty = static_cast<Dir_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.capacity, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.blockW, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.assoc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.nbanks, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.throughput, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.dir_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.missb_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.fu_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.prefetchb_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.wbb_size, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: basic_components.h:136|7
parents: basic_components.h
*/
template<>
struct serdes<CoreDynParam> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double ([4])>(alignadd<bool>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<double>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<bool>(alignadd<bool>(alignadd<bool>(0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<double>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<bool>::align), serdes<double ([4])>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const CoreDynParam &x, size_t p, ser_reg &reg) {
        serdes<bool>::ser(x.opt_local, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.x86, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.Embedded, p = ::align<bool>(p), reg); p = add<bool>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.core_ty); p = add<unsigned int>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.rm_ty); p = add<unsigned int>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.scheu_ty); p = add<unsigned int>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.arch_ireg_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.arch_freg_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.phy_ireg_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.phy_freg_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.hthread_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_IRF_entry, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_FRF_entry, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_ifreelist_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_ffreelist_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.fetchW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.decodeW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.issueW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.peak_issueW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.commitW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.peak_commitW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.predictionW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.fp_issueW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.fp_decodeW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.perThreadState, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.globalCheckpoint, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.instruction_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.pc_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.opcode_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.micro_opcode_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_hthreads, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.pipeline_stages, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.fp_pipeline_stages, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_pipelines, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_fp_pipelines, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_alus, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_muls, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.num_fpus, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.int_data_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.fp_data_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.v_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.p_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.pipeline_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.busy_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.idle_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.regWindowing, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.multithreaded, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double ([4])>::ser(x.pppm_lkg_multhread, p = ::align<double ([4])>(p), reg); p = add<double ([4])>(p);
        serdes<double>::ser(x.IFU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.BR_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.LSU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.MemManU_I_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.MemManU_D_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.ALU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.MUL_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.FPU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.ALU_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.MUL_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.FPU_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(CoreDynParam &x, const uint8_t *p, des_reg &reg) {
        serdes<bool>::des(x.opt_local, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.x86, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.Embedded, p = ::align<bool>(p), reg); p = add<bool>(p);
        x.core_ty = static_cast<Core_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        x.rm_ty = static_cast<Renaming_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        x.scheu_ty = static_cast<Scheduler_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.arch_ireg_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.arch_freg_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.phy_ireg_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.phy_freg_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.hthread_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_IRF_entry, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_FRF_entry, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_ifreelist_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_ffreelist_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.fetchW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.decodeW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.issueW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.peak_issueW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.commitW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.peak_commitW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.predictionW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.fp_issueW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.fp_decodeW, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.perThreadState, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.globalCheckpoint, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.instruction_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.pc_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.opcode_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.micro_opcode_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_hthreads, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.pipeline_stages, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.fp_pipeline_stages, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_pipelines, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_fp_pipelines, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_alus, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_muls, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.num_fpus, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.int_data_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.fp_data_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.v_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.p_address_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.pipeline_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.busy_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.idle_cycles, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.regWindowing, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.multithreaded, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double ([4])>::des(x.pppm_lkg_multhread, p = ::align<double ([4])>(p), reg); p = add<double ([4])>(p);
        serdes<double>::des(x.IFU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.BR_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.LSU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.MemManU_I_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.MemManU_D_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.ALU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.MUL_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.FPU_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.ALU_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.MUL_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.FPU_cdb_duty_cycle, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gating_vcc, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: basic_components.h:93|7
parents: basic_components.h
*/
template<>
struct serdes<statsComponents> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(0)));
    static constexpr size_t align = std::max(std::max(std::max((size_t) 1, serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const statsComponents &x, size_t p, ser_reg &reg) {
        serdes<double>::ser(x.access, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.hit, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.miss, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(statsComponents &x, const uint8_t *p, des_reg &reg) {
        serdes<double>::des(x.access, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.hit, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.miss, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: basic_components.h:115|7
parents: basic_components.h
*/
template<>
struct serdes<statsDef> {
    static constexpr size_t size = alignadd<statsComponents>(alignadd<statsComponents>(alignadd<statsComponents>(0)));
    static constexpr size_t align = std::max(std::max(std::max((size_t) 1, serdes<statsComponents>::align), serdes<statsComponents>::align), serdes<statsComponents>::align);

    static void ser(const statsDef &x, size_t p, ser_reg &reg) {
        serdes<statsComponents>::ser(x.readAc, p = ::align<statsComponents>(p), reg); p = add<statsComponents>(p);
        serdes<statsComponents>::ser(x.writeAc, p = ::align<statsComponents>(p), reg); p = add<statsComponents>(p);
        serdes<statsComponents>::ser(x.searchAc, p = ::align<statsComponents>(p), reg); p = add<statsComponents>(p);
    }
    static void des(statsDef &x, const uint8_t *p, des_reg &reg) {
        serdes<statsComponents>::des(x.readAc, p = ::align<statsComponents>(p), reg); p = add<statsComponents>(p);
        serdes<statsComponents>::des(x.writeAc, p = ::align<statsComponents>(p), reg); p = add<statsComponents>(p);
        serdes<statsComponents>::des(x.searchAc, p = ::align<statsComponents>(p), reg); p = add<statsComponents>(p);
    }
};

/*
location: arch_const.h:35|9
parents: arch_const.h
*/
template<>
struct serdes<array_inputs> {
    static constexpr size_t size = alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(0)));
    static constexpr size_t align = std::max(std::max(std::max((size_t) 1, serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align);

    static void ser(const array_inputs &x, size_t p, ser_reg &reg) {
        serdes<unsigned int>::ser(x.capacity, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.assoc, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.blocksize, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
    }
    static void des(array_inputs &x, const uint8_t *p, des_reg &reg) {
        serdes<unsigned int>::des(x.capacity, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.assoc, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.blocksize, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
    }
};

/*
location: cacti/Ucache.h:43|7
parents: cacti/Ucache.h
*/
template<>
struct serdes<min_values_t> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(0)))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const min_values_t &x, size_t p, ser_reg &reg) {
        serdes<double>::ser(x.min_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.min_dyn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.min_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.min_area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.min_cyc, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(min_values_t &x, const uint8_t *p, des_reg &reg) {
        serdes<double>::des(x.min_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.min_dyn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.min_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.min_area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.min_cyc, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: cacti/parameter.h:139|9
parents: cacti/parameter.h -> TechnologyParameter
*/
template<>
struct serdes<TechnologyParameter::MemoryType> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(0)))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const TechnologyParameter::MemoryType &x, size_t p, ser_reg &reg) {
        serdes<double>::ser(x.b_w, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.b_h, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cell_a_w, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cell_pmos_w, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cell_nmos_w, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Vbitpre, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Vbitfloating, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(TechnologyParameter::MemoryType &x, const uint8_t *p, des_reg &reg) {
        serdes<double>::des(x.b_w, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.b_h, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cell_a_w, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cell_pmos_w, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cell_nmos_w, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Vbitpre, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Vbitfloating, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: cacti/parameter.h:164|9
parents: cacti/parameter.h -> TechnologyParameter
*/
template<>
struct serdes<TechnologyParameter::ScalingFactor> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(0)));
    static constexpr size_t align = std::max(std::max(std::max((size_t) 1, serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const TechnologyParameter::ScalingFactor &x, size_t p, ser_reg &reg) {
        serdes<double>::ser(x.logic_scaling_co_eff, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.core_tx_density, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.long_channel_leakage_reduction, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(TechnologyParameter::ScalingFactor &x, const uint8_t *p, des_reg &reg) {
        serdes<double>::des(x.logic_scaling_co_eff, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.core_tx_density, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.long_channel_leakage_reduction, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: cacti/parameter.h:111|9
parents: cacti/parameter.h -> TechnologyParameter
*/
template<>
struct serdes<TechnologyParameter::InterconnectType> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(0))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const TechnologyParameter::InterconnectType &x, size_t p, ser_reg &reg) {
        serdes<double>::ser(x.pitch, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.R_per_um, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.C_per_um, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.horiz_dielectric_constant, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vert_dielectric_constant, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.aspect_ratio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.miller_value, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.ild_thickness, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(TechnologyParameter::InterconnectType &x, const uint8_t *p, des_reg &reg) {
        serdes<double>::des(x.pitch, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.R_per_um, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.C_per_um, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.horiz_dielectric_constant, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vert_dielectric_constant, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.aspect_ratio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.miller_value, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.ild_thickness, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: cacti/parameter.h:46|9
parents: cacti/parameter.h -> TechnologyParameter
*/
template<>
struct serdes<TechnologyParameter::DeviceType> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(0)))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const TechnologyParameter::DeviceType &x, size_t p, ser_reg &reg) {
        serdes<double>::ser(x.C_g_ideal, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.C_fringe, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.C_overlap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.C_junc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.C_junc_sidewall, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.l_phy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.l_elec, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.R_nch_on, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.R_pch_on, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Vdd_default, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Vth, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Vcc_min_default, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Vcc_min, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.I_on_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.I_on_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.I_off_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.I_off_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.I_g_on_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.I_g_on_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.C_ox, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.t_ox, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.n_to_p_eff_curr_drv_ratio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.long_channel_leakage_reduction, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Mobility_n, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(TechnologyParameter::DeviceType &x, const uint8_t *p, des_reg &reg) {
        serdes<double>::des(x.C_g_ideal, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.C_fringe, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.C_overlap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.C_junc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.C_junc_sidewall, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.l_phy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.l_elec, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.R_nch_on, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.R_pch_on, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Vdd_default, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Vth, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Vcc_min_default, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Vcc_min, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.I_on_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.I_on_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.I_off_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.I_off_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.I_g_on_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.I_g_on_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.C_ox, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.t_ox, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.n_to_p_eff_curr_drv_ratio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.long_channel_leakage_reduction, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Mobility_n, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: cacti/parameter.h:43|7
parents: cacti/parameter.h
*/
template<>
struct serdes<TechnologyParameter> {
    static constexpr size_t size = alignadd<TechnologyParameter::MemoryType>(alignadd<TechnologyParameter::MemoryType>(alignadd<TechnologyParameter::MemoryType>(alignadd<TechnologyParameter::ScalingFactor>(alignadd<TechnologyParameter::InterconnectType>(alignadd<TechnologyParameter::InterconnectType>(alignadd<TechnologyParameter::InterconnectType>(alignadd<TechnologyParameter::DeviceType>(alignadd<TechnologyParameter::DeviceType>(alignadd<TechnologyParameter::DeviceType>(alignadd<TechnologyParameter::DeviceType>(alignadd<TechnologyParameter::DeviceType>(alignadd<TechnologyParameter::DeviceType>(alignadd<unsigned long long>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(0))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<unsigned long long>::align), serdes<TechnologyParameter::DeviceType>::align), serdes<TechnologyParameter::DeviceType>::align), serdes<TechnologyParameter::DeviceType>::align), serdes<TechnologyParameter::DeviceType>::align), serdes<TechnologyParameter::DeviceType>::align), serdes<TechnologyParameter::DeviceType>::align), serdes<TechnologyParameter::InterconnectType>::align), serdes<TechnologyParameter::InterconnectType>::align), serdes<TechnologyParameter::InterconnectType>::align), serdes<TechnologyParameter::ScalingFactor>::align), serdes<TechnologyParameter::MemoryType>::align), serdes<TechnologyParameter::MemoryType>::align), serdes<TechnologyParameter::MemoryType>::align);

    static void ser(const TechnologyParameter &x, size_t p, ser_reg &reg) {
        serdes<double>::ser(x.ram_wl_stitching_overhead_, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.min_w_nmos_, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.max_w_nmos_, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.max_w_nmos_dec, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.unit_len_wire_del, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.FO4, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.kinv, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vpp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_sense_en, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_sense_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_sense_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.sense_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.sense_dy_power, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_iso, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_poly_contact, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.spacing_poly_to_poly, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.spacing_poly_to_contact, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_comp_inv_p1, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_comp_inv_p2, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_comp_inv_p3, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_comp_inv_n1, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_comp_inv_n2, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_comp_inv_n3, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_eval_inv_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_eval_inv_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_comp_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_comp_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.dram_cell_I_on, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.dram_cell_Vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.dram_cell_I_off_worst_case_len_temp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.dram_cell_C, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.gm_sense_amp_latch, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_nmos_b_mux, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_nmos_sa_mux, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_pmos_bl_precharge, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.w_pmos_bl_eq, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.MIN_GAP_BET_P_AND_N_DIFFS, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.MIN_GAP_BET_SAME_TYPE_DIFFS, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.HPOWERRAIL, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cell_h_def, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_layout_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.macro_layout_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.sckt_co_eff, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fringe_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<unsigned long long>::ser(x.h_dec, p = ::align<unsigned long long>(p), reg); p = add<unsigned long long>(p);
        serdes<TechnologyParameter::DeviceType>::ser(x.sram_cell, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::DeviceType>::ser(x.dram_acc, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::DeviceType>::ser(x.dram_wl, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::DeviceType>::ser(x.peri_global, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::DeviceType>::ser(x.cam_cell, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::DeviceType>::ser(x.sleep_tx, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::InterconnectType>::ser(x.wire_local, p = ::align<TechnologyParameter::InterconnectType>(p), reg); p = add<TechnologyParameter::InterconnectType>(p);
        serdes<TechnologyParameter::InterconnectType>::ser(x.wire_inside_mat, p = ::align<TechnologyParameter::InterconnectType>(p), reg); p = add<TechnologyParameter::InterconnectType>(p);
        serdes<TechnologyParameter::InterconnectType>::ser(x.wire_outside_mat, p = ::align<TechnologyParameter::InterconnectType>(p), reg); p = add<TechnologyParameter::InterconnectType>(p);
        serdes<TechnologyParameter::ScalingFactor>::ser(x.scaling_factor, p = ::align<TechnologyParameter::ScalingFactor>(p), reg); p = add<TechnologyParameter::ScalingFactor>(p);
        serdes<TechnologyParameter::MemoryType>::ser(x.sram, p = ::align<TechnologyParameter::MemoryType>(p), reg); p = add<TechnologyParameter::MemoryType>(p);
        serdes<TechnologyParameter::MemoryType>::ser(x.dram, p = ::align<TechnologyParameter::MemoryType>(p), reg); p = add<TechnologyParameter::MemoryType>(p);
        serdes<TechnologyParameter::MemoryType>::ser(x.cam, p = ::align<TechnologyParameter::MemoryType>(p), reg); p = add<TechnologyParameter::MemoryType>(p);
    }
    static void des(TechnologyParameter &x, const uint8_t *p, des_reg &reg) {
        serdes<double>::des(x.ram_wl_stitching_overhead_, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.min_w_nmos_, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.max_w_nmos_, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.max_w_nmos_dec, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.unit_len_wire_del, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.FO4, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.kinv, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vpp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_sense_en, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_sense_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_sense_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.sense_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.sense_dy_power, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_iso, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_poly_contact, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.spacing_poly_to_poly, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.spacing_poly_to_contact, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_comp_inv_p1, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_comp_inv_p2, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_comp_inv_p3, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_comp_inv_n1, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_comp_inv_n2, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_comp_inv_n3, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_eval_inv_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_eval_inv_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_comp_n, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_comp_p, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.dram_cell_I_on, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.dram_cell_Vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.dram_cell_I_off_worst_case_len_temp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.dram_cell_C, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.gm_sense_amp_latch, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_nmos_b_mux, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_nmos_sa_mux, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_pmos_bl_precharge, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.w_pmos_bl_eq, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.MIN_GAP_BET_P_AND_N_DIFFS, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.MIN_GAP_BET_SAME_TYPE_DIFFS, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.HPOWERRAIL, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cell_h_def, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_layout_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.macro_layout_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.sckt_co_eff, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fringe_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<unsigned long long>::des(x.h_dec, p = ::align<unsigned long long>(p), reg); p = add<unsigned long long>(p);
        serdes<TechnologyParameter::DeviceType>::des(x.sram_cell, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::DeviceType>::des(x.dram_acc, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::DeviceType>::des(x.dram_wl, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::DeviceType>::des(x.peri_global, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::DeviceType>::des(x.cam_cell, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::DeviceType>::des(x.sleep_tx, p = ::align<TechnologyParameter::DeviceType>(p), reg); p = add<TechnologyParameter::DeviceType>(p);
        serdes<TechnologyParameter::InterconnectType>::des(x.wire_local, p = ::align<TechnologyParameter::InterconnectType>(p), reg); p = add<TechnologyParameter::InterconnectType>(p);
        serdes<TechnologyParameter::InterconnectType>::des(x.wire_inside_mat, p = ::align<TechnologyParameter::InterconnectType>(p), reg); p = add<TechnologyParameter::InterconnectType>(p);
        serdes<TechnologyParameter::InterconnectType>::des(x.wire_outside_mat, p = ::align<TechnologyParameter::InterconnectType>(p), reg); p = add<TechnologyParameter::InterconnectType>(p);
        serdes<TechnologyParameter::ScalingFactor>::des(x.scaling_factor, p = ::align<TechnologyParameter::ScalingFactor>(p), reg); p = add<TechnologyParameter::ScalingFactor>(p);
        serdes<TechnologyParameter::MemoryType>::des(x.sram, p = ::align<TechnologyParameter::MemoryType>(p), reg); p = add<TechnologyParameter::MemoryType>(p);
        serdes<TechnologyParameter::MemoryType>::des(x.dram, p = ::align<TechnologyParameter::MemoryType>(p), reg); p = add<TechnologyParameter::MemoryType>(p);
        serdes<TechnologyParameter::MemoryType>::des(x.cam, p = ::align<TechnologyParameter::MemoryType>(p), reg); p = add<TechnologyParameter::MemoryType>(p);
    }
};

/*
location: cacti/cacti_interface.h:117|7
parents: cacti/cacti_interface.h
*/
template<>
struct serdes<InputParameter> {
    static constexpr size_t size = alignadd<bool>(alignadd<std::vector<double>>(alignadd<bool>(alignadd<double>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<int>(alignadd<unsigned int>(alignadd<bool>(alignadd<bool>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<unsigned int>(alignadd<bool>(alignadd<int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<bool>(alignadd<double>(alignadd<bool>(alignadd<double>(alignadd<bool>(alignadd<double>(alignadd<bool>(alignadd<double>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<bool>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<bool>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<double>::align), serdes<bool>::align), serdes<double>::align), serdes<bool>::align), serdes<double>::align), serdes<bool>::align), serdes<double>::align), serdes<bool>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<int>::align), serdes<bool>::align), serdes<unsigned int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<bool>::align), serdes<bool>::align), serdes<unsigned int>::align), serdes<int>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<double>::align), serdes<bool>::align), serdes<std::vector<double>>::align), serdes<bool>::align);

    static void ser(const InputParameter &x, size_t p, ser_reg &reg) {
        serdes<unsigned int>::ser(x.cache_sz, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.line_sz, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.assoc, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.nbanks, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.out_w, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<bool>::ser(x.specific_tag, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::ser(x.tag_w, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.access_mode, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.obj_func_dyn_energy, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.obj_func_dyn_power, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.obj_func_leak_power, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.obj_func_cycle_t, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<double>::ser(x.F_sz_nm, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.F_sz_um, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.specific_hp_vdd, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.hp_Vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.specific_lstp_vdd, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.lstp_Vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.specific_lop_vdd, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.lop_Vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.specific_vcc_min, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.user_defined_vcc_min, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.user_defined_vcc_underflow, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::ser(x.num_rw_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.num_rd_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.num_wr_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.num_se_rd_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.num_search_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<bool>::ser(x.is_main_mem, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.is_cache, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.pure_ram, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.pure_cam, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.rpters_in_htree, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::ser(x.ver_htree_wires_over_array, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.broadcast_addr_din_over_ver_htrees, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.temp, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.ram_cell_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.peri_global_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.data_arr_ram_cell_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.data_arr_peri_global_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.tag_arr_ram_cell_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.tag_arr_peri_global_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.burst_len, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.int_prefetch_w, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.page_sz_bits, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.ic_proj_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.wire_is_mat_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.wire_os_mat_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.wt); p = add<unsigned int>(p);
        serdes<int>::ser(x.force_wiretype, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.print_input_args, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::ser(x.nuca_cache_sz, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<int>::ser(x.ndbl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.ndwl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.nspd, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.ndsam1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.ndsam2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.ndcm, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.force_cache_config, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.cache_level, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.cores, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.nuca_bank_count, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.force_nuca_bank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.delay_wt, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.dynamic_power_wt, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.leakage_power_wt, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.cycle_time_wt, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.area_wt, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.delay_wt_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.dynamic_power_wt_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.leakage_power_wt_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.cycle_time_wt_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.area_wt_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.delay_dev, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.dynamic_power_dev, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.leakage_power_dev, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.cycle_time_dev, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.area_dev, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.delay_dev_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.dynamic_power_dev_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.leakage_power_dev_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.cycle_time_dev_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.area_dev_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.ed, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.fast_access, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::ser(x.block_sz, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.tag_assoc, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.data_assoc, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<bool>::ser(x.is_seq_acc, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.fully_assoc, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::ser(x.nsets, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<int>::ser(x.print_detail, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.add_ecc_b_, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.throughput, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.pipelinable, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.pipeline_stages, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.per_stage_vector, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.with_clock_grid, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.array_power_gated, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.bitline_floating, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.wl_power_gated, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.cl_power_gated, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.interconect_power_gated, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.power_gating, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.perfloss, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.cl_vertical, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<std::vector<double>>::ser(x.dvs_voltage, p = ::align<std::vector<double>>(p), reg); p = add<std::vector<double>>(p);
        serdes<bool>::ser(x.long_channel_device, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(InputParameter &x, const uint8_t *p, des_reg &reg) {
        serdes<unsigned int>::des(x.cache_sz, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.line_sz, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.assoc, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.nbanks, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.out_w, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<bool>::des(x.specific_tag, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::des(x.tag_w, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.access_mode, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.obj_func_dyn_energy, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.obj_func_dyn_power, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.obj_func_leak_power, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.obj_func_cycle_t, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<double>::des(x.F_sz_nm, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.F_sz_um, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.specific_hp_vdd, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.hp_Vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.specific_lstp_vdd, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.lstp_Vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.specific_lop_vdd, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.lop_Vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.specific_vcc_min, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.user_defined_vcc_min, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.user_defined_vcc_underflow, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::des(x.num_rw_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.num_rd_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.num_wr_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.num_se_rd_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.num_search_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<bool>::des(x.is_main_mem, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.is_cache, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.pure_ram, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.pure_cam, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.rpters_in_htree, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::des(x.ver_htree_wires_over_array, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.broadcast_addr_din_over_ver_htrees, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.temp, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.ram_cell_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.peri_global_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.data_arr_ram_cell_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.data_arr_peri_global_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.tag_arr_ram_cell_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.tag_arr_peri_global_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.burst_len, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.int_prefetch_w, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.page_sz_bits, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.ic_proj_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.wire_is_mat_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.wire_os_mat_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        x.wt = static_cast<Wire_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<int>::des(x.force_wiretype, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.print_input_args, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::des(x.nuca_cache_sz, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<int>::des(x.ndbl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.ndwl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.nspd, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.ndsam1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.ndsam2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.ndcm, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.force_cache_config, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.cache_level, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.cores, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.nuca_bank_count, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.force_nuca_bank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.delay_wt, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.dynamic_power_wt, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.leakage_power_wt, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.cycle_time_wt, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.area_wt, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.delay_wt_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.dynamic_power_wt_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.leakage_power_wt_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.cycle_time_wt_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.area_wt_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.delay_dev, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.dynamic_power_dev, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.leakage_power_dev, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.cycle_time_dev, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.area_dev, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.delay_dev_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.dynamic_power_dev_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.leakage_power_dev_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.cycle_time_dev_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.area_dev_nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.ed, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.nuca, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.fast_access, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::des(x.block_sz, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.tag_assoc, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.data_assoc, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<bool>::des(x.is_seq_acc, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.fully_assoc, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<unsigned int>::des(x.nsets, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<int>::des(x.print_detail, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.add_ecc_b_, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.throughput, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.pipelinable, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.pipeline_stages, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.per_stage_vector, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.with_clock_grid, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.array_power_gated, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.bitline_floating, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.wl_power_gated, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.cl_power_gated, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.interconect_power_gated, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.power_gating, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.perfloss, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.cl_vertical, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<std::vector<double>>::des(x.dvs_voltage, p = ::align<std::vector<double>>(p), reg); p = add<std::vector<double>>(p);
        serdes<bool>::des(x.long_channel_device, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: cacti/cacti_interface.h:52|7
parents: cacti/cacti_interface.h
*/
template<>
struct serdes<powerComponents> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(0)))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const powerComponents &x, size_t p, ser_reg &reg) {
        serdes<double>::ser(x.dynamic, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.gate_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.short_circuit, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.longer_channel_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gated_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.power_gated_with_long_channel_leakage, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(powerComponents &x, const uint8_t *p, des_reg &reg) {
        serdes<double>::des(x.dynamic, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.gate_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.short_circuit, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.longer_channel_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gated_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.power_gated_with_long_channel_leakage, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: cacti/cacti_interface.h:87|7
parents: cacti/cacti_interface.h
*/
template<>
struct serdes<powerDef> {
    static constexpr size_t size = alignadd<powerComponents>(alignadd<powerComponents>(alignadd<powerComponents>(0)));
    static constexpr size_t align = std::max(std::max(std::max((size_t) 1, serdes<powerComponents>::align), serdes<powerComponents>::align), serdes<powerComponents>::align);

    static void ser(const powerDef &x, size_t p, ser_reg &reg) {
        serdes<powerComponents>::ser(x.readOp, p = ::align<powerComponents>(p), reg); p = add<powerComponents>(p);
        serdes<powerComponents>::ser(x.writeOp, p = ::align<powerComponents>(p), reg); p = add<powerComponents>(p);
        serdes<powerComponents>::ser(x.searchOp, p = ::align<powerComponents>(p), reg); p = add<powerComponents>(p);
    }
    static void des(powerDef &x, const uint8_t *p, des_reg &reg) {
        serdes<powerComponents>::des(x.readOp, p = ::align<powerComponents>(p), reg); p = add<powerComponents>(p);
        serdes<powerComponents>::des(x.writeOp, p = ::align<powerComponents>(p), reg); p = add<powerComponents>(p);
        serdes<powerComponents>::des(x.searchOp, p = ::align<powerComponents>(p), reg); p = add<powerComponents>(p);
    }
};

/*
location: cacti/cacti_interface.h:578|7
parents: cacti/cacti_interface.h
*/
template<>
struct serdes<mem_array> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<unsigned int>(alignadd<min_values_t (*)>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<powerDef>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<powerDef>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<min_values_t (*)>::align), serdes<unsigned int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const mem_array &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.Ndcm, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Ndwl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Ndbl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.Nspd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.deg_bl_muxing, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Ndsam_lev_1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Ndsam_lev_2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.access_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.multisubbank_interleave_cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.area_ram_cells, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::ser(x.power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::ser(x.delay_senseamp_mux_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_before_subarray_output_driver, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_from_subarray_output_driver_to_output, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.mat_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.mat_length, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.subarray_length, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.subarray_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_route_to_bank, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_input_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_row_predecode_driver_and_block, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_row_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_bitlines, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_sense_amp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_subarray_output_driver, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_dout_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_comparator, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_matchlines, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.all_banks_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.all_banks_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.area_efficiency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::ser(x.power_routing_to_bank, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_addr_input_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_data_input_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_data_output_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_htree_in_search, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_htree_out_search, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_row_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_row_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_row_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_bit_mux_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_bit_mux_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_bit_mux_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_1_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_1_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_1_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_2_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_2_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_2_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_bitlines, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_sense_amps, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_prechg_eq_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_output_drivers_at_subarray, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_dataout_vertical_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_comparators, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_cam_bitline_precharge_eq_drv, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_searchline, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_searchline_precharge, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_matchlines, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_matchline_precharge, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_matchline_to_wordline_drv, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<min_values_t (*)>::ser(x.arr_min, p = ::align<min_values_t (*)>(p), reg); p = add<min_values_t (*)>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.wt); p = add<unsigned int>(p);
        serdes<double>::ser(x.activate_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.precharge_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.refresh_power, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.leak_power_subbank_closed_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.leak_power_subbank_open_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.leak_power_request_and_reply_networks, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.precharge_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.array_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wl_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cl_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.sram_sleep_tx_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wl_sleep_tx_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cl_sleep_tx_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.sram_sleep_tx_area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wl_sleep_tx_area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cl_sleep_tx_area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.sram_sleep_wakeup_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wl_sleep_wakeup_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cl_sleep_wakeup_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.bl_floating_wakeup_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.sram_sleep_wakeup_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wl_sleep_wakeup_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cl_sleep_wakeup_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.bl_floating_wakeup_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.num_active_mats, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_submarray_mats, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.long_channel_leakage_reduction_periperal, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.long_channel_leakage_reduction_memcell, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(mem_array &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.Ndcm, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Ndwl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Ndbl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.Nspd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.deg_bl_muxing, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Ndsam_lev_1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Ndsam_lev_2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.access_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.multisubbank_interleave_cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.area_ram_cells, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::des(x.power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::des(x.delay_senseamp_mux_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_before_subarray_output_driver, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_from_subarray_output_driver_to_output, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.mat_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.mat_length, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.subarray_length, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.subarray_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_route_to_bank, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_input_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_row_predecode_driver_and_block, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_row_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_bitlines, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_sense_amp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_subarray_output_driver, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_dout_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_comparator, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_matchlines, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.all_banks_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.all_banks_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.area_efficiency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::des(x.power_routing_to_bank, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_addr_input_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_data_input_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_data_output_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_htree_in_search, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_htree_out_search, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_row_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_row_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_row_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_bit_mux_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_bit_mux_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_bit_mux_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_1_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_1_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_1_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_2_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_2_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_2_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_bitlines, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_sense_amps, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_prechg_eq_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_output_drivers_at_subarray, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_dataout_vertical_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_comparators, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_cam_bitline_precharge_eq_drv, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_searchline, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_searchline_precharge, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_matchlines, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_matchline_precharge, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_matchline_to_wordline_drv, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<min_values_t (*)>::des(x.arr_min, p = ::align<min_values_t (*)>(p), reg); p = add<min_values_t (*)>(p);
        x.wt = static_cast<Wire_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<double>::des(x.activate_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.precharge_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.refresh_power, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.leak_power_subbank_closed_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.leak_power_subbank_open_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.leak_power_request_and_reply_networks, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.precharge_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.array_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wl_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cl_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.sram_sleep_tx_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wl_sleep_tx_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cl_sleep_tx_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.sram_sleep_tx_area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wl_sleep_tx_area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cl_sleep_tx_area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.sram_sleep_wakeup_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wl_sleep_wakeup_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cl_sleep_wakeup_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.bl_floating_wakeup_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.sram_sleep_wakeup_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wl_sleep_wakeup_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cl_sleep_wakeup_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.bl_floating_wakeup_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.num_active_mats, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_submarray_mats, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.long_channel_leakage_reduction_periperal, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.long_channel_leakage_reduction_memcell, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: cacti/cacti_interface.h:239|9
parents: cacti/cacti_interface.h
*/
template<>
struct serdes<results_mem_array> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<int>(alignadd<int>(0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const results_mem_array &x, size_t p, ser_reg &reg) {
        serdes<int>::ser(x.Ndwl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Ndbl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.Nspd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.deg_bl_muxing, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Ndsam_lev_1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Ndsam_lev_2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_activated_mats_horizontal_direction, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_subbanks, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.page_size_in_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.delay_route_to_bank, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_crossbar, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_addr_din_horizontal_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_addr_din_vertical_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_row_predecode_driver_and_block, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_row_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_bitlines, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_sense_amp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_subarray_output_driver, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_bit_mux_predecode_driver_and_block, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_bit_mux_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_senseamp_mux_lev_1_predecode_driver_and_block, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_senseamp_mux_lev_1_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_senseamp_mux_lev_2_predecode_driver_and_block, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_senseamp_mux_lev_2_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_input_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_output_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_dout_vertical_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_dout_horizontal_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_comparator, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.access_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.multisubbank_interleave_cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_request_network, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_inside_mat, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_reply_network, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.trcd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cas_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.precharge_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::ser(x.power_routing_to_bank, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_addr_input_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_data_input_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_data_output_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_addr_horizontal_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_datain_horizontal_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_dataout_horizontal_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_addr_vertical_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_datain_vertical_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_row_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_row_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_row_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_bit_mux_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_bit_mux_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_bit_mux_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_1_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_1_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_1_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_2_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_2_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_senseamp_mux_lev_2_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_bitlines, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_sense_amps, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_prechg_eq_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_output_drivers_at_subarray, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_dataout_vertical_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_comparators, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_crossbar, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.total_power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::ser(x.area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.all_banks_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.all_banks_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.bank_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.bank_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.subarray_memory_cell_area_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.subarray_memory_cell_area_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.mat_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.mat_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.routing_area_height_within_bank, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.routing_area_width_within_bank, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.area_efficiency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.refresh_power, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.dram_refresh_period, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.dram_array_availability, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.dyn_read_energy_from_closed_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.dyn_read_energy_from_open_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.leak_power_subbank_closed_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.leak_power_subbank_open_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.leak_power_request_and_reply_networks, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.activate_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.read_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.write_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.precharge_energy, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(results_mem_array &x, const uint8_t *p, des_reg &reg) {
        serdes<int>::des(x.Ndwl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Ndbl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.Nspd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.deg_bl_muxing, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Ndsam_lev_1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Ndsam_lev_2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_activated_mats_horizontal_direction, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_subbanks, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.page_size_in_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.delay_route_to_bank, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_crossbar, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_addr_din_horizontal_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_addr_din_vertical_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_row_predecode_driver_and_block, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_row_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_bitlines, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_sense_amp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_subarray_output_driver, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_bit_mux_predecode_driver_and_block, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_bit_mux_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_senseamp_mux_lev_1_predecode_driver_and_block, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_senseamp_mux_lev_1_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_senseamp_mux_lev_2_predecode_driver_and_block, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_senseamp_mux_lev_2_decoder, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_input_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_output_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_dout_vertical_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_dout_horizontal_htree, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_comparator, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.access_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.multisubbank_interleave_cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_request_network, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_inside_mat, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_reply_network, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.trcd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cas_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.precharge_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::des(x.power_routing_to_bank, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_addr_input_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_data_input_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_data_output_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_addr_horizontal_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_datain_horizontal_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_dataout_horizontal_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_addr_vertical_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_datain_vertical_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_row_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_row_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_row_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_bit_mux_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_bit_mux_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_bit_mux_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_1_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_1_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_1_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_2_predecoder_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_2_predecoder_blocks, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_senseamp_mux_lev_2_decoders, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_bitlines, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_sense_amps, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_prechg_eq_drivers, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_output_drivers_at_subarray, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_dataout_vertical_htree, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_comparators, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_crossbar, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.total_power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::des(x.area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.all_banks_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.all_banks_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.bank_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.bank_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.subarray_memory_cell_area_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.subarray_memory_cell_area_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.mat_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.mat_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.routing_area_height_within_bank, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.routing_area_width_within_bank, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.area_efficiency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.refresh_power, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.dram_refresh_period, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.dram_array_availability, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.dyn_read_energy_from_closed_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.dyn_read_energy_from_open_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.leak_power_subbank_closed_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.leak_power_subbank_open_page, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.leak_power_request_and_reply_networks, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.activate_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.read_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.write_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.precharge_energy, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: cacti/cacti_interface.h:387|7
parents: cacti/cacti_interface.h
*/
template<>
struct serdes<uca_org_t> {
    static constexpr size_t size = alignadd<uca_org_t (*)>(alignadd<std::vector<uca_org_t *>>(alignadd<results_mem_array>(alignadd<results_mem_array>(alignadd<bool>(alignadd<double>(alignadd<char ([100])>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<powerDef>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<mem_array (*)>(alignadd<mem_array (*)>(0)))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<mem_array (*)>::align), serdes<mem_array (*)>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<powerDef>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<char ([100])>::align), serdes<double>::align), serdes<bool>::align), serdes<results_mem_array>::align), serdes<results_mem_array>::align), serdes<std::vector<uca_org_t *>>::align), serdes<uca_org_t (*)>::align);

    static void ser(const uca_org_t &x, size_t p, ser_reg &reg) {
        serdes<mem_array (*)>::ser(x.tag_array2, p = ::align<mem_array (*)>(p), reg); p = add<mem_array (*)>(p);
        serdes<mem_array (*)>::ser(x.data_array2, p = ::align<mem_array (*)>(p), reg); p = add<mem_array (*)>(p);
        serdes<double>::ser(x.access_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.area_efficiency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::ser(x.power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::ser(x.leak_power_with_sleep_transistors_in_mats, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cache_ht, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cache_len, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<char ([100])>::ser(x.file_n, p = ::align<char ([100])>(p), reg); p = add<char ([100])>(p);
        serdes<double>::ser(x.vdd_periph_global, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.valid, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<results_mem_array>::ser(x.tag_array, p = ::align<results_mem_array>(p), reg); p = add<results_mem_array>(p);
        serdes<results_mem_array>::ser(x.data_array, p = ::align<results_mem_array>(p), reg); p = add<results_mem_array>(p);
        serdes<std::vector<uca_org_t *>>::ser(x.uca_q, p = ::align<std::vector<uca_org_t *>>(p), reg); p = add<std::vector<uca_org_t *>>(p);
        serdes<uca_org_t (*)>::ser(x.uca_pg_reference, p = ::align<uca_org_t (*)>(p), reg); p = add<uca_org_t (*)>(p);
    }
    static void des(uca_org_t &x, const uint8_t *p, des_reg &reg) {
        serdes<mem_array (*)>::des(x.tag_array2, p = ::align<mem_array (*)>(p), reg); p = add<mem_array (*)>(p);
        serdes<mem_array (*)>::des(x.data_array2, p = ::align<mem_array (*)>(p), reg); p = add<mem_array (*)>(p);
        serdes<double>::des(x.access_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.area, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.area_efficiency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::des(x.power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::des(x.leak_power_with_sleep_transistors_in_mats, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cache_ht, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cache_len, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<char ([100])>::des(x.file_n, p = ::align<char ([100])>(p), reg); p = add<char ([100])>(p);
        serdes<double>::des(x.vdd_periph_global, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.valid, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<results_mem_array>::des(x.tag_array, p = ::align<results_mem_array>(p), reg); p = add<results_mem_array>(p);
        serdes<results_mem_array>::des(x.data_array, p = ::align<results_mem_array>(p), reg); p = add<results_mem_array>(p);
        serdes<std::vector<uca_org_t *>>::des(x.uca_q, p = ::align<std::vector<uca_org_t *>>(p), reg); p = add<std::vector<uca_org_t *>>(p);
        serdes<uca_org_t (*)>::des(x.uca_pg_reference, p = ::align<uca_org_t (*)>(p), reg); p = add<uca_org_t (*)>(p);
    }
};

namespace {
template<class Token, double (Area::*Member)>
struct hack_Accessor_17 {
    friend constexpr double (Area::*hack_Access_17(Token *)) {
        return Member;
    }
};
struct hack_Token_17 {
    friend constexpr double (Area::*hack_Access_17(hack_Token_17*));
};
template struct hack_Accessor_17<
    hack_Token_17, &Area::area
>;
}


/*
location: cacti/area.h:42|7
parents: cacti/area.h
*/
template<>
struct serdes<Area> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(0)));
    static constexpr size_t align = std::max(std::max(std::max((size_t) 1, serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const Area &x, size_t p, ser_reg &reg) {
        serdes<double>::ser(x.w, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.h, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_17(static_cast<hack_Token_17 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(Area &x, const uint8_t *p, des_reg &reg) {
        serdes<double>::des(x.w, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.h, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_17(static_cast<hack_Token_17 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: cacti/parameter.h:299|7
parents: cacti/parameter.h
*/
template<>
struct serdes<DynamicParameter> {
    static constexpr size_t size = alignadd<bool>(alignadd<Area>(alignadd<Area>(alignadd<bool>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<int>(alignadd<double>(alignadd<unsigned int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<double>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<bool>(0)))))))))))))))))))))))))))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<double>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<unsigned int>::align), serdes<double>::align), serdes<int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<bool>::align), serdes<Area>::align), serdes<Area>::align), serdes<bool>::align);

    static void ser(const DynamicParameter &x, size_t p, ser_reg &reg) {
        serdes<bool>::ser(x.is_tag, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.pure_ram, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.pure_cam, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.fully_assoc, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.tagbits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_subarrays, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_mats, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.Nspd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.Ndwl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Ndbl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Ndcm, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.deg_bl_muxing, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.deg_senseamp_muxing_non_associativity, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Ndsam_lev_1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.Ndsam_lev_2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_addr_bits_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_subbanks_decode, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_di_b_bank_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_do_b_bank_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_di_b_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_do_b_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_di_b_subbank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_do_b_subbank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_si_b_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_so_b_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_si_b_subbank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_so_b_subbank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_si_b_bank_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_so_b_bank_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_way_select_signals_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_act_mats_hor_dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_act_mats_hor_dir_sl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.is_dram, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.V_b_sense, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<unsigned int>::ser(x.num_r_subarray, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.num_c_subarray, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<int>::ser(x.tag_num_r_subarray, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.tag_num_c_subarray, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.data_num_r_subarray, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.data_num_c_subarray, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_mats_h_dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_mats_v_dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<unsigned int>::ser(x.ram_cell_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<double>::ser(x.dram_refresh_period, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.use_inp_params, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<unsigned int>::ser(x.num_rw_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.num_rd_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.num_wr_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.num_se_rd_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.num_search_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.out_w, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<bool>::ser(x.is_main_mem, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<Area>::ser(x.cell, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<Area>::ser(x.cam_cell, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<bool>::ser(x.is_valid, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(DynamicParameter &x, const uint8_t *p, des_reg &reg) {
        serdes<bool>::des(x.is_tag, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.pure_ram, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.pure_cam, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.fully_assoc, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.tagbits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_subarrays, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_mats, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.Nspd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.Ndwl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Ndbl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Ndcm, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.deg_bl_muxing, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.deg_senseamp_muxing_non_associativity, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Ndsam_lev_1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.Ndsam_lev_2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_addr_bits_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_subbanks_decode, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_di_b_bank_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_do_b_bank_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_di_b_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_do_b_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_di_b_subbank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_do_b_subbank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_si_b_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_so_b_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_si_b_subbank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_so_b_subbank, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_si_b_bank_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_so_b_bank_per_port, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_way_select_signals_mat, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_act_mats_hor_dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_act_mats_hor_dir_sl, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.is_dram, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.V_b_sense, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<unsigned int>::des(x.num_r_subarray, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.num_c_subarray, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<int>::des(x.tag_num_r_subarray, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.tag_num_c_subarray, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.data_num_r_subarray, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.data_num_c_subarray, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_mats_h_dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_mats_v_dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<unsigned int>::des(x.ram_cell_tech_type, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<double>::des(x.dram_refresh_period, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.use_inp_params, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<unsigned int>::des(x.num_rw_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.num_rd_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.num_wr_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.num_se_rd_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.num_search_ports, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.out_w, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<bool>::des(x.is_main_mem, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<Area>::des(x.cell, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<Area>::des(x.cam_cell, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<bool>::des(x.is_valid, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: cacti/component.h:45|7
parents: cacti/component.h
*/
template<>
struct serdes<Component> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<powerDef>(alignadd<powerDef>(alignadd<Area>(0)))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Area>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const Component &x, size_t p, ser_reg &reg) {
        serdes<Area>::ser(x.area, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<powerDef>::ser(x.power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.rt_power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::ser(x.delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(Component &x, const uint8_t *p, des_reg &reg) {
        serdes<Area>::des(x.area, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<powerDef>::des(x.power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.rt_power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::des(x.delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: processor.h:49|7
parents: processor.h
*/
template<>
struct serdes<Processor> {
    static constexpr size_t size = alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<ProcParam>(alignadd<InputParameter>(alignadd<FlashController (*)>(alignadd<PCIeController (*)>(alignadd<NIUController (*)>(alignadd<MemoryController (*)>(alignadd<std::vector<NoC *>>(alignadd<std::vector<SharedCache *>>(alignadd<std::vector<SharedCache *>>(alignadd<std::vector<SharedCache *>>(alignadd<std::vector<SharedCache *>>(alignadd<std::vector<Core *>>(alignadd<ParseXML (*)>(alignadd<Component>(0)))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<std::vector<Core *>>::align), serdes<std::vector<SharedCache *>>::align), serdes<std::vector<SharedCache *>>::align), serdes<std::vector<SharedCache *>>::align), serdes<std::vector<SharedCache *>>::align), serdes<std::vector<NoC *>>::align), serdes<MemoryController (*)>::align), serdes<NIUController (*)>::align), serdes<PCIeController (*)>::align), serdes<FlashController (*)>::align), serdes<InputParameter>::align), serdes<ProcParam>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align);

    static void ser(const Processor &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<std::vector<Core *>>::ser(x.cores, p = ::align<std::vector<Core *>>(p), reg); p = add<std::vector<Core *>>(p);
        serdes<std::vector<SharedCache *>>::ser(x.l2array, p = ::align<std::vector<SharedCache *>>(p), reg); p = add<std::vector<SharedCache *>>(p);
        serdes<std::vector<SharedCache *>>::ser(x.l3array, p = ::align<std::vector<SharedCache *>>(p), reg); p = add<std::vector<SharedCache *>>(p);
        serdes<std::vector<SharedCache *>>::ser(x.l1dirarray, p = ::align<std::vector<SharedCache *>>(p), reg); p = add<std::vector<SharedCache *>>(p);
        serdes<std::vector<SharedCache *>>::ser(x.l2dirarray, p = ::align<std::vector<SharedCache *>>(p), reg); p = add<std::vector<SharedCache *>>(p);
        serdes<std::vector<NoC *>>::ser(x.nocs, p = ::align<std::vector<NoC *>>(p), reg); p = add<std::vector<NoC *>>(p);
        serdes<MemoryController (*)>::ser(x.mc, p = ::align<MemoryController (*)>(p), reg); p = add<MemoryController (*)>(p);
        serdes<NIUController (*)>::ser(x.niu, p = ::align<NIUController (*)>(p), reg); p = add<NIUController (*)>(p);
        serdes<PCIeController (*)>::ser(x.pcie, p = ::align<PCIeController (*)>(p), reg); p = add<PCIeController (*)>(p);
        serdes<FlashController (*)>::ser(x.flashcontroller, p = ::align<FlashController (*)>(p), reg); p = add<FlashController (*)>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<ProcParam>::ser(x.procdynp, p = ::align<ProcParam>(p), reg); p = add<ProcParam>(p);
        serdes<Component>::ser(x.core, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.l2, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.l3, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.l1dir, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.l2dir, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.noc, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.mcs, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.cc, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.nius, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.pcies, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.flashcontrollers, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<int>::ser(x.numCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numL2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numL3, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numNOC, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numL1Dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.numL2Dir, p = ::align<int>(p), reg); p = add<int>(p);
    }
    static void des(Processor &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<std::vector<Core *>>::des(x.cores, p = ::align<std::vector<Core *>>(p), reg); p = add<std::vector<Core *>>(p);
        serdes<std::vector<SharedCache *>>::des(x.l2array, p = ::align<std::vector<SharedCache *>>(p), reg); p = add<std::vector<SharedCache *>>(p);
        serdes<std::vector<SharedCache *>>::des(x.l3array, p = ::align<std::vector<SharedCache *>>(p), reg); p = add<std::vector<SharedCache *>>(p);
        serdes<std::vector<SharedCache *>>::des(x.l1dirarray, p = ::align<std::vector<SharedCache *>>(p), reg); p = add<std::vector<SharedCache *>>(p);
        serdes<std::vector<SharedCache *>>::des(x.l2dirarray, p = ::align<std::vector<SharedCache *>>(p), reg); p = add<std::vector<SharedCache *>>(p);
        serdes<std::vector<NoC *>>::des(x.nocs, p = ::align<std::vector<NoC *>>(p), reg); p = add<std::vector<NoC *>>(p);
        serdes<MemoryController (*)>::des(x.mc, p = ::align<MemoryController (*)>(p), reg); p = add<MemoryController (*)>(p);
        serdes<NIUController (*)>::des(x.niu, p = ::align<NIUController (*)>(p), reg); p = add<NIUController (*)>(p);
        serdes<PCIeController (*)>::des(x.pcie, p = ::align<PCIeController (*)>(p), reg); p = add<PCIeController (*)>(p);
        serdes<FlashController (*)>::des(x.flashcontroller, p = ::align<FlashController (*)>(p), reg); p = add<FlashController (*)>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<ProcParam>::des(x.procdynp, p = ::align<ProcParam>(p), reg); p = add<ProcParam>(p);
        serdes<Component>::des(x.core, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.l2, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.l3, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.l1dir, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.l2dir, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.noc, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.mcs, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.cc, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.nius, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.pcies, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.flashcontrollers, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<int>::des(x.numCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numL2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numL3, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numNOC, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numL1Dir, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.numL2Dir, p = ::align<int>(p), reg); p = add<int>(p);
    }
};

/*
location: noc.h:42|7
parents: noc.h
*/
template<>
struct serdes<NoC> {
    static constexpr size_t size = alignadd<double>(alignadd<std::basic_string<char>>(alignadd<std::basic_string<char>>(alignadd<bool>(alignadd<bool>(alignadd<Component>(alignadd<powerDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<uca_org_t>(alignadd<NoCParam>(alignadd<interconnect (*)>(alignadd<Router (*)>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0)))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<Router (*)>::align), serdes<interconnect (*)>::align), serdes<NoCParam>::align), serdes<uca_org_t>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<powerDef>::align), serdes<Component>::align), serdes<bool>::align), serdes<bool>::align), serdes<std::basic_string<char>>::align), serdes<std::basic_string<char>>::align), serdes<double>::align);

    static void ser(const NoC &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithNoC, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<double>::ser(x.link_len, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<Router (*)>::ser(x.router, p = ::align<Router (*)>(p), reg); p = add<Router (*)>(p);
        serdes<interconnect (*)>::ser(x.link_bus, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<NoCParam>::ser(x.nocdynp, p = ::align<NoCParam>(p), reg); p = add<NoCParam>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<statsDef>::ser(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::ser(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<Component>::ser(x.link_bus_tot_per_Router, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<bool>::ser(x.link_bus_exist, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.router_exist, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<std::basic_string<char>>::ser(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<std::basic_string<char>>::ser(x.link_name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<double>::ser(x.M_traffic_pattern, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(NoC &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithNoC, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<double>::des(x.link_len, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<Router (*)>::des(x.router, p = ::align<Router (*)>(p), reg); p = add<Router (*)>(p);
        serdes<interconnect (*)>::des(x.link_bus, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<NoCParam>::des(x.nocdynp, p = ::align<NoCParam>(p), reg); p = add<NoCParam>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<statsDef>::des(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::des(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<Component>::des(x.link_bus_tot_per_Router, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<bool>::des(x.link_bus_exist, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.router_exist, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<std::basic_string<char>>::des(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<std::basic_string<char>>::des(x.link_name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        serdes<double>::des(x.M_traffic_pattern, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: memoryctrl.h:97|7
parents: memoryctrl.h
*/
template<>
struct serdes<MemoryController> {
    static constexpr size_t size = alignadd<Pipeline (*)>(alignadd<MCPHY (*)>(alignadd<MCBackend (*)>(alignadd<MCFrontEnd (*)>(alignadd<MCParam>(alignadd<unsigned int>(alignadd<InputParameter>(alignadd<ParseXML (*)>(alignadd<Component>(0)))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<InputParameter>::align), serdes<unsigned int>::align), serdes<MCParam>::align), serdes<MCFrontEnd (*)>::align), serdes<MCBackend (*)>::align), serdes<MCPHY (*)>::align), serdes<Pipeline (*)>::align);

    static void ser(const MemoryController &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.mc_type); p = add<unsigned int>(p);
        serdes<MCParam>::ser(x.mcp, p = ::align<MCParam>(p), reg); p = add<MCParam>(p);
        serdes<MCFrontEnd (*)>::ser(x.frontend, p = ::align<MCFrontEnd (*)>(p), reg); p = add<MCFrontEnd (*)>(p);
        serdes<MCBackend (*)>::ser(x.transecEngine, p = ::align<MCBackend (*)>(p), reg); p = add<MCBackend (*)>(p);
        serdes<MCPHY (*)>::ser(x.PHY, p = ::align<MCPHY (*)>(p), reg); p = add<MCPHY (*)>(p);
        serdes<Pipeline (*)>::ser(x.pipeLogic, p = ::align<Pipeline (*)>(p), reg); p = add<Pipeline (*)>(p);
    }
    static void des(MemoryController &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        x.mc_type = static_cast<MemoryCtrl_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<MCParam>::des(x.mcp, p = ::align<MCParam>(p), reg); p = add<MCParam>(p);
        serdes<MCFrontEnd (*)>::des(x.frontend, p = ::align<MCFrontEnd (*)>(p), reg); p = add<MCFrontEnd (*)>(p);
        serdes<MCBackend (*)>::des(x.transecEngine, p = ::align<MCBackend (*)>(p), reg); p = add<MCBackend (*)>(p);
        serdes<MCPHY (*)>::des(x.PHY, p = ::align<MCPHY (*)>(p), reg); p = add<MCPHY (*)>(p);
        serdes<Pipeline (*)>::des(x.pipeLogic, p = ::align<Pipeline (*)>(p), reg); p = add<Pipeline (*)>(p);
    }
};

/*
location: memoryctrl.h:80|7
parents: memoryctrl.h
*/
template<>
struct serdes<MCFrontEnd> {
    static constexpr size_t size = alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<selection_logic (*)>(alignadd<MCParam>(alignadd<unsigned int>(alignadd<InputParameter>(alignadd<ParseXML (*)>(alignadd<Component>(0)))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<InputParameter>::align), serdes<unsigned int>::align), serdes<MCParam>::align), serdes<selection_logic (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align);

    static void ser(const MCFrontEnd &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.mc_type); p = add<unsigned int>(p);
        serdes<MCParam>::ser(x.mcp, p = ::align<MCParam>(p), reg); p = add<MCParam>(p);
        serdes<selection_logic (*)>::ser(x.MC_arb, p = ::align<selection_logic (*)>(p), reg); p = add<selection_logic (*)>(p);
        serdes<ArrayST (*)>::ser(x.frontendBuffer, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.readBuffer, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.writeBuffer, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
    }
    static void des(MCFrontEnd &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        x.mc_type = static_cast<MemoryCtrl_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<MCParam>::des(x.mcp, p = ::align<MCParam>(p), reg); p = add<MCParam>(p);
        serdes<selection_logic (*)>::des(x.MC_arb, p = ::align<selection_logic (*)>(p), reg); p = add<selection_logic (*)>(p);
        serdes<ArrayST (*)>::des(x.frontendBuffer, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.readBuffer, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.writeBuffer, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
    }
};

/*
location: memoryctrl.h:63|7
parents: memoryctrl.h
*/
template<>
struct serdes<MCPHY> {
    static constexpr size_t size = alignadd<powerDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<MCParam>(alignadd<unsigned int>(alignadd<uca_org_t>(alignadd<InputParameter>(alignadd<Component>(0)))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<InputParameter>::align), serdes<uca_org_t>::align), serdes<unsigned int>::align), serdes<MCParam>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<powerDef>::align);

    static void ser(const MCPHY &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::ser(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.mc_type); p = add<unsigned int>(p);
        serdes<MCParam>::ser(x.mcp, p = ::align<MCParam>(p), reg); p = add<MCParam>(p);
        serdes<statsDef>::ser(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::ser(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
    static void des(MCPHY &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::des(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        x.mc_type = static_cast<MemoryCtrl_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<MCParam>::des(x.mcp, p = ::align<MCParam>(p), reg); p = add<MCParam>(p);
        serdes<statsDef>::des(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::des(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
};

/*
location: memoryctrl.h:46|7
parents: memoryctrl.h
*/
template<>
struct serdes<MCBackend> {
    static constexpr size_t size = alignadd<powerDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<MCParam>(alignadd<unsigned int>(alignadd<uca_org_t>(alignadd<InputParameter>(alignadd<Component>(0)))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<InputParameter>::align), serdes<uca_org_t>::align), serdes<unsigned int>::align), serdes<MCParam>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<powerDef>::align);

    static void ser(const MCBackend &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::ser(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.mc_type); p = add<unsigned int>(p);
        serdes<MCParam>::ser(x.mcp, p = ::align<MCParam>(p), reg); p = add<MCParam>(p);
        serdes<statsDef>::ser(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::ser(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
    static void des(MCBackend &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::des(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        x.mc_type = static_cast<MemoryCtrl_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<MCParam>::des(x.mcp, p = ::align<MCParam>(p), reg); p = add<MCParam>(p);
        serdes<statsDef>::des(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::des(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
};

/*
location: logic.h:213|7
parents: logic.h
*/
template<>
struct serdes<UndiffCore> {
    static constexpr size_t size = alignadd<bool>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<bool>(alignadd<unsigned int>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<CoreDynParam>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<CoreDynParam>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<unsigned int>::align), serdes<bool>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<bool>::align);

    static void ser(const UndiffCore &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.core_ty); p = add<unsigned int>(p);
        serdes<bool>::ser(x.opt_performance, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.embedded, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.pipeline_stage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.num_hthreads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.issue_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(UndiffCore &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        x.core_ty = static_cast<Core_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<bool>::des(x.opt_performance, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.embedded, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.pipeline_stage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.num_hthreads, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.issue_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: logic.h:189|7
parents: logic.h
*/
template<>
struct serdes<FunctionalUnit> {
    static constexpr size_t size = alignadd<powerDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<unsigned int>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<CoreDynParam>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<CoreDynParam>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<unsigned int>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<powerDef>::align);

    static void ser(const FunctionalUnit &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::ser(x.FU_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.num_fu, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.base_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.per_access_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.gate_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.fu_type); p = add<unsigned int>(p);
        serdes<statsDef>::ser(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::ser(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
    static void des(FunctionalUnit &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::des(x.FU_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.num_fu, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.base_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.per_access_energy, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.gate_leakage, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        x.fu_type = static_cast<FU_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<statsDef>::des(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::des(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
};

/*
location: logic.h:151|7
parents: logic.h
*/
template<>
struct serdes<Pipeline> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<double>(alignadd<bool>(alignadd<bool>(alignadd<unsigned int>(alignadd<CoreDynParam>(alignadd<uca_org_t>(alignadd<InputParameter>(alignadd<Component>(0))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<InputParameter>::align), serdes<uca_org_t>::align), serdes<CoreDynParam>::align), serdes<unsigned int>::align), serdes<bool>::align), serdes<bool>::align), serdes<double>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const Pipeline &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::ser(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.device_ty); p = add<unsigned int>(p);
        serdes<bool>::ser(x.is_core_pipeline, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.num_piperegs, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.process_ind, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.WNANDn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.WNANDp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.load_per_pipeline_stage, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(Pipeline &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::des(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        x.device_ty = static_cast<Device_ty>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<bool>::des(x.is_core_pipeline, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.num_piperegs, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.process_ind, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.WNANDn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.WNANDp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.load_per_pipeline_stage, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: logic.h:127|7
parents: logic.h
*/
template<>
struct serdes<DFFCell> {
    static constexpr size_t size = alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<InputParameter>(alignadd<Component>(0))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<InputParameter>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align);

    static void ser(const DFFCell &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::ser(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<bool>::ser(x.is_dram, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.cell_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.WdecNANDn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.WdecNANDp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.clock_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.model, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.n_switch, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.n_keep_1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.n_keep_0, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.n_clock, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<powerDef>::ser(x.e_switch, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.e_keep_1, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.e_keep_0, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.e_clock, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
    static void des(DFFCell &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::des(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<bool>::des(x.is_dram, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.cell_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.WdecNANDn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.WdecNANDp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.clock_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.model, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.n_switch, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.n_keep_1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.n_keep_0, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.n_clock, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<powerDef>::des(x.e_switch, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.e_keep_1, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.e_keep_0, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.e_clock, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
};

/*
location: logic.h:95|7
parents: logic.h
*/
template<>
struct serdes<inst_decoder> {
    static constexpr size_t size = alignadd<powerDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<Predec (*)>(alignadd<Decoder (*)>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<uca_org_t>(alignadd<InputParameter>(alignadd<int>(alignadd<int>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<bool>(alignadd<Component>(0)))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<bool>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<int>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<uca_org_t>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<Decoder (*)>::align), serdes<Predec (*)>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<powerDef>::align);

    static void ser(const inst_decoder &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<bool>::ser(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.opcode_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_decoders, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.x86, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.num_decoder_segments, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_decoded_signals, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.device_ty); p = add<unsigned int>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.core_ty); p = add<unsigned int>(p);
        serdes<Decoder (*)>::ser(x.final_dec, p = ::align<Decoder (*)>(p), reg); p = add<Decoder (*)>(p);
        serdes<Predec (*)>::ser(x.pre_dec, p = ::align<Predec (*)>(p), reg); p = add<Predec (*)>(p);
        serdes<statsDef>::ser(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::ser(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
    static void des(inst_decoder &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<bool>::des(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.opcode_length, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_decoders, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.x86, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.num_decoder_segments, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_decoded_signals, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        x.device_ty = static_cast<Device_ty>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        x.core_ty = static_cast<Core_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<Decoder (*)>::des(x.final_dec, p = ::align<Decoder (*)>(p), reg); p = add<Decoder (*)>(p);
        serdes<Predec (*)>::des(x.pre_dec, p = ::align<Predec (*)>(p), reg); p = add<Predec (*)>(p);
        serdes<statsDef>::des(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::des(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
};

/*
location: logic.h:72|7
parents: logic.h
*/
template<>
struct serdes<dep_resource_conflict_check> {
    static constexpr size_t size = alignadd<powerDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<bool>(alignadd<int>(alignadd<CoreDynParam>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<uca_org_t>(alignadd<InputParameter>(alignadd<Component>(0)))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<InputParameter>::align), serdes<uca_org_t>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<CoreDynParam>::align), serdes<int>::align), serdes<bool>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<powerDef>::align);

    static void ser(const dep_resource_conflict_check &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::ser(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<double>::ser(x.WNORn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.WNORp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Wevalinvp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Wevalinvn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Wcompn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Wcompp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Wcomppreequ, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<int>::ser(x.compare_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<statsDef>::ser(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::ser(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
    static void des(dep_resource_conflict_check &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::des(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<double>::des(x.WNORn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.WNORp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Wevalinvp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Wevalinvn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Wcompn, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Wcompp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Wcomppreequ, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<int>::des(x.compare_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<statsDef>::des(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::des(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
};

/*
location: logic.h:52|7
parents: logic.h
*/
template<>
struct serdes<selection_logic> {
    static constexpr size_t size = alignadd<unsigned int>(alignadd<unsigned int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<const ParseXML (*)>(alignadd<uca_org_t>(alignadd<InputParameter>(alignadd<bool>(alignadd<Component>(0))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<bool>::align), serdes<InputParameter>::align), serdes<uca_org_t>::align), serdes<const ParseXML (*)>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<unsigned int>::align), serdes<unsigned int>::align);

    static void ser(const selection_logic &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<bool>::ser(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<InputParameter>::ser(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<const ParseXML (*)>::ser(x.XML_interface, p = ::align<const ParseXML (*)>(p), reg); p = add<const ParseXML (*)>(p);
        serdes<int>::ser(x.win_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.issue_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_threads, p = ::align<int>(p), reg); p = add<int>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.device_ty); p = add<unsigned int>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.core_ty); p = add<unsigned int>(p);
    }
    static void des(selection_logic &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<bool>::des(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<InputParameter>::des(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<const ParseXML (*)>::des(x.XML_interface, p = ::align<const ParseXML (*)>(p), reg); p = add<const ParseXML (*)>(p);
        serdes<int>::des(x.win_entries, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.issue_width, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_threads, p = ::align<int>(p), reg); p = add<int>(p);
        x.device_ty = static_cast<Device_ty>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        x.core_ty = static_cast<Core_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
    }
};

/*
location: iocontrollers.h:70|7
parents: iocontrollers.h
*/
template<>
struct serdes<FlashController> {
    static constexpr size_t size = alignadd<uca_org_t>(alignadd<powerDef>(alignadd<MCParam>(alignadd<InputParameter>(alignadd<ParseXML (*)>(alignadd<Component>(0))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<InputParameter>::align), serdes<MCParam>::align), serdes<powerDef>::align), serdes<uca_org_t>::align);

    static void ser(const FlashController &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<MCParam>::ser(x.fcp, p = ::align<MCParam>(p), reg); p = add<MCParam>(p);
        serdes<powerDef>::ser(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
    }
    static void des(FlashController &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<MCParam>::des(x.fcp, p = ::align<MCParam>(p), reg); p = add<MCParam>(p);
        serdes<powerDef>::des(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
    }
};

/*
location: iocontrollers.h:56|7
parents: iocontrollers.h
*/
template<>
struct serdes<PCIeController> {
    static constexpr size_t size = alignadd<uca_org_t>(alignadd<powerDef>(alignadd<PCIeParam>(alignadd<InputParameter>(alignadd<ParseXML (*)>(alignadd<Component>(0))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<InputParameter>::align), serdes<PCIeParam>::align), serdes<powerDef>::align), serdes<uca_org_t>::align);

    static void ser(const PCIeController &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<PCIeParam>::ser(x.pciep, p = ::align<PCIeParam>(p), reg); p = add<PCIeParam>(p);
        serdes<powerDef>::ser(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
    }
    static void des(PCIeController &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<PCIeParam>::des(x.pciep, p = ::align<PCIeParam>(p), reg); p = add<PCIeParam>(p);
        serdes<powerDef>::des(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
    }
};

/*
location: iocontrollers.h:42|7
parents: iocontrollers.h
*/
template<>
struct serdes<NIUController> {
    static constexpr size_t size = alignadd<uca_org_t>(alignadd<powerDef>(alignadd<NIUParam>(alignadd<InputParameter>(alignadd<ParseXML (*)>(alignadd<Component>(0))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<InputParameter>::align), serdes<NIUParam>::align), serdes<powerDef>::align), serdes<uca_org_t>::align);

    static void ser(const NIUController &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<NIUParam>::ser(x.niup, p = ::align<NIUParam>(p), reg); p = add<NIUParam>(p);
        serdes<powerDef>::ser(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
    }
    static void des(NIUController &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<NIUParam>::des(x.niup, p = ::align<NIUParam>(p), reg); p = add<NIUParam>(p);
        serdes<powerDef>::des(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
    }
};

namespace {
template<class Token, TechnologyParameter::DeviceType (*(interconnect::*Member))>
struct hack_Accessor_65 {
    friend constexpr TechnologyParameter::DeviceType (*(interconnect::*hack_Access_65(Token *))) {
        return Member;
    }
};
struct hack_Token_65 {
    friend constexpr TechnologyParameter::DeviceType (*(interconnect::*hack_Access_65(hack_Token_65*)));
};
template struct hack_Accessor_65<
    hack_Token_65, &interconnect::deviceType
>;
}


/*
location: interconnect.h:48|7
parents: interconnect.h
*/
template<>
struct serdes<interconnect> {
    static constexpr size_t size = alignadd<TechnologyParameter::DeviceType (*)>(alignadd<int>(alignadd<double>(alignadd<bool>(alignadd<unsigned int>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<double>(alignadd<double>(alignadd<unsigned int>(alignadd<int>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<powerDef>(alignadd<double>(alignadd<Area>(alignadd<uca_org_t>(alignadd<InputParameter>(alignadd<double>(alignadd<double>(alignadd<unsigned int>(alignadd<std::basic_string<char>>(alignadd<Component>(0))))))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<std::basic_string<char>>::align), serdes<unsigned int>::align), serdes<double>::align), serdes<double>::align), serdes<InputParameter>::align), serdes<uca_org_t>::align), serdes<Area>::align), serdes<double>::align), serdes<powerDef>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<int>::align), serdes<unsigned int>::align), serdes<double>::align), serdes<double>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<unsigned int>::align), serdes<bool>::align), serdes<double>::align), serdes<int>::align), serdes<TechnologyParameter::DeviceType (*)>::align);

    static void ser(const interconnect &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<std::basic_string<char>>::ser(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.device_ty); p = add<unsigned int>(p);
        serdes<double>::ser(x.in_rise_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.out_rise_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<InputParameter>::ser(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<Area>::ser(x.no_device_under_wire_area, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<double>::ser(x.max_unpipelined_link_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::ser(x.power_bit, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::ser(x.wire_bw, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.init_wire_bw, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.base_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.base_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.data_width, p = ::align<int>(p), reg); p = add<int>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.wt); p = add<unsigned int>(p);
        serdes<double>::ser(x.width_scaling, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.space_scaling, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.start_wiring_level, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.length, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.min_w_nmos, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.min_w_pmos, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.throughput, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.latency_overflow, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.throughput_overflow, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.interconnect_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.interconnect_throughput, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.opt_local, p = ::align<bool>(p), reg); p = add<bool>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.core_ty); p = add<unsigned int>(p);
        serdes<bool>::ser(x.pipelinable, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.route_over_perc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.num_pipe_stages, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<TechnologyParameter::DeviceType (*)>::ser(x.*hack_Access_65(static_cast<hack_Token_65 *>(nullptr)), p = ::align<TechnologyParameter::DeviceType (*)>(p), reg); p = add<TechnologyParameter::DeviceType (*)>(p);
    }
    static void des(interconnect &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<std::basic_string<char>>::des(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        x.device_ty = static_cast<Device_ty>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<double>::des(x.in_rise_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.out_rise_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<InputParameter>::des(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<Area>::des(x.no_device_under_wire_area, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<double>::des(x.max_unpipelined_link_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::des(x.power_bit, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::des(x.wire_bw, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.init_wire_bw, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.base_width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.base_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.data_width, p = ::align<int>(p), reg); p = add<int>(p);
        x.wt = static_cast<Wire_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<double>::des(x.width_scaling, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.space_scaling, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.start_wiring_level, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.length, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.min_w_nmos, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.min_w_pmos, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.throughput, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.latency_overflow, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.throughput_overflow, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.interconnect_latency, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.interconnect_throughput, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.opt_local, p = ::align<bool>(p), reg); p = add<bool>(p);
        x.core_ty = static_cast<Core_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<bool>::des(x.pipelinable, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.route_over_perc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.num_pipe_stages, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<TechnologyParameter::DeviceType (*)>::des(x.*hack_Access_65(static_cast<hack_Token_65 *>(nullptr)), p = ::align<TechnologyParameter::DeviceType (*)>(p), reg); p = add<TechnologyParameter::DeviceType (*)>(p);
    }
};

/*
location: core.h:241|7
parents: core.h
*/
template<>
struct serdes<Core> {
    static constexpr size_t size = alignadd<CoreDynParam>(alignadd<SharedCache (*)>(alignadd<UndiffCore (*)>(alignadd<Pipeline (*)>(alignadd<RENAMINGU (*)>(alignadd<EXECU (*)>(alignadd<MemManU (*)>(alignadd<LoadStoreU (*)>(alignadd<InstFetchU (*)>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<InstFetchU (*)>::align), serdes<LoadStoreU (*)>::align), serdes<MemManU (*)>::align), serdes<EXECU (*)>::align), serdes<RENAMINGU (*)>::align), serdes<Pipeline (*)>::align), serdes<UndiffCore (*)>::align), serdes<SharedCache (*)>::align), serdes<CoreDynParam>::align);

    static void ser(const Core &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<InstFetchU (*)>::ser(x.ifu, p = ::align<InstFetchU (*)>(p), reg); p = add<InstFetchU (*)>(p);
        serdes<LoadStoreU (*)>::ser(x.lsu, p = ::align<LoadStoreU (*)>(p), reg); p = add<LoadStoreU (*)>(p);
        serdes<MemManU (*)>::ser(x.mmu, p = ::align<MemManU (*)>(p), reg); p = add<MemManU (*)>(p);
        serdes<EXECU (*)>::ser(x.exu, p = ::align<EXECU (*)>(p), reg); p = add<EXECU (*)>(p);
        serdes<RENAMINGU (*)>::ser(x.rnu, p = ::align<RENAMINGU (*)>(p), reg); p = add<RENAMINGU (*)>(p);
        serdes<Pipeline (*)>::ser(x.corepipe, p = ::align<Pipeline (*)>(p), reg); p = add<Pipeline (*)>(p);
        serdes<UndiffCore (*)>::ser(x.undiffCore, p = ::align<UndiffCore (*)>(p), reg); p = add<UndiffCore (*)>(p);
        serdes<SharedCache (*)>::ser(x.l2cache, p = ::align<SharedCache (*)>(p), reg); p = add<SharedCache (*)>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
    }
    static void des(Core &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<InstFetchU (*)>::des(x.ifu, p = ::align<InstFetchU (*)>(p), reg); p = add<InstFetchU (*)>(p);
        serdes<LoadStoreU (*)>::des(x.lsu, p = ::align<LoadStoreU (*)>(p), reg); p = add<LoadStoreU (*)>(p);
        serdes<MemManU (*)>::des(x.mmu, p = ::align<MemManU (*)>(p), reg); p = add<MemManU (*)>(p);
        serdes<EXECU (*)>::des(x.exu, p = ::align<EXECU (*)>(p), reg); p = add<EXECU (*)>(p);
        serdes<RENAMINGU (*)>::des(x.rnu, p = ::align<RENAMINGU (*)>(p), reg); p = add<RENAMINGU (*)>(p);
        serdes<Pipeline (*)>::des(x.corepipe, p = ::align<Pipeline (*)>(p), reg); p = add<Pipeline (*)>(p);
        serdes<UndiffCore (*)>::des(x.undiffCore, p = ::align<UndiffCore (*)>(p), reg); p = add<UndiffCore (*)>(p);
        serdes<SharedCache (*)>::des(x.l2cache, p = ::align<SharedCache (*)>(p), reg); p = add<SharedCache (*)>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
    }
};

/*
location: core.h:209|7
parents: core.h
*/
template<>
struct serdes<EXECU> {
    static constexpr size_t size = alignadd<bool>(alignadd<Component>(alignadd<interconnect (*)>(alignadd<interconnect (*)>(alignadd<interconnect (*)>(alignadd<interconnect (*)>(alignadd<interconnect (*)>(alignadd<interconnect (*)>(alignadd<FunctionalUnit (*)>(alignadd<FunctionalUnit (*)>(alignadd<FunctionalUnit (*)>(alignadd<SchedulerU (*)>(alignadd<RegFU (*)>(alignadd<CoreDynParam>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<CoreDynParam>::align), serdes<RegFU (*)>::align), serdes<SchedulerU (*)>::align), serdes<FunctionalUnit (*)>::align), serdes<FunctionalUnit (*)>::align), serdes<FunctionalUnit (*)>::align), serdes<interconnect (*)>::align), serdes<interconnect (*)>::align), serdes<interconnect (*)>::align), serdes<interconnect (*)>::align), serdes<interconnect (*)>::align), serdes<interconnect (*)>::align), serdes<Component>::align), serdes<bool>::align);

    static void ser(const EXECU &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.lsq_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<RegFU (*)>::ser(x.rfu, p = ::align<RegFU (*)>(p), reg); p = add<RegFU (*)>(p);
        serdes<SchedulerU (*)>::ser(x.scheu, p = ::align<SchedulerU (*)>(p), reg); p = add<SchedulerU (*)>(p);
        serdes<FunctionalUnit (*)>::ser(x.fp_u, p = ::align<FunctionalUnit (*)>(p), reg); p = add<FunctionalUnit (*)>(p);
        serdes<FunctionalUnit (*)>::ser(x.exeu, p = ::align<FunctionalUnit (*)>(p), reg); p = add<FunctionalUnit (*)>(p);
        serdes<FunctionalUnit (*)>::ser(x.mul, p = ::align<FunctionalUnit (*)>(p), reg); p = add<FunctionalUnit (*)>(p);
        serdes<interconnect (*)>::ser(x.int_bypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<interconnect (*)>::ser(x.intTagBypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<interconnect (*)>::ser(x.int_mul_bypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<interconnect (*)>::ser(x.intTag_mul_Bypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<interconnect (*)>::ser(x.fp_bypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<interconnect (*)>::ser(x.fpTagBypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<Component>::ser(x.bypass, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<bool>::ser(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(EXECU &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.lsq_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<RegFU (*)>::des(x.rfu, p = ::align<RegFU (*)>(p), reg); p = add<RegFU (*)>(p);
        serdes<SchedulerU (*)>::des(x.scheu, p = ::align<SchedulerU (*)>(p), reg); p = add<SchedulerU (*)>(p);
        serdes<FunctionalUnit (*)>::des(x.fp_u, p = ::align<FunctionalUnit (*)>(p), reg); p = add<FunctionalUnit (*)>(p);
        serdes<FunctionalUnit (*)>::des(x.exeu, p = ::align<FunctionalUnit (*)>(p), reg); p = add<FunctionalUnit (*)>(p);
        serdes<FunctionalUnit (*)>::des(x.mul, p = ::align<FunctionalUnit (*)>(p), reg); p = add<FunctionalUnit (*)>(p);
        serdes<interconnect (*)>::des(x.int_bypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<interconnect (*)>::des(x.intTagBypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<interconnect (*)>::des(x.int_mul_bypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<interconnect (*)>::des(x.intTag_mul_Bypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<interconnect (*)>::des(x.fp_bypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<interconnect (*)>::des(x.fpTagBypass, p = ::align<interconnect (*)>(p), reg); p = add<interconnect (*)>(p);
        serdes<Component>::des(x.bypass, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<bool>::des(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: core.h:188|7
parents: core.h
*/
template<>
struct serdes<RegFU> {
    static constexpr size_t size = alignadd<bool>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<CoreDynParam>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<CoreDynParam>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<bool>::align);

    static void ser(const RegFU &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.int_regfile_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fp_regfile_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<ArrayST (*)>::ser(x.IRF, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.FRF, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.RFWIN, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<bool>::ser(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(RegFU &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.int_regfile_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fp_regfile_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<ArrayST (*)>::des(x.IRF, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.FRF, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.RFWIN, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<bool>::des(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: core.h:169|7
parents: core.h
*/
template<>
struct serdes<MemManU> {
    static constexpr size_t size = alignadd<bool>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<CoreDynParam>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0)))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<CoreDynParam>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<bool>::align);

    static void ser(const MemManU &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<ArrayST (*)>::ser(x.itlb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.dtlb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<bool>::ser(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(MemManU &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<ArrayST (*)>::des(x.itlb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.dtlb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<bool>::des(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: core.h:121|7
parents: core.h
*/
template<>
struct serdes<RENAMINGU> {
    static constexpr size_t size = alignadd<bool>(alignadd<ArrayST (*)>(alignadd<dep_resource_conflict_check (*)>(alignadd<dep_resource_conflict_check (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<CoreDynParam>(alignadd<double>(alignadd<double>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0)))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<double>::align), serdes<double>::align), serdes<CoreDynParam>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<dep_resource_conflict_check (*)>::align), serdes<dep_resource_conflict_check (*)>::align), serdes<ArrayST (*)>::align), serdes<bool>::align);

    static void ser(const RENAMINGU &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<ArrayST (*)>::ser(x.iFRAT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.fFRAT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.iRRAT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.fRRAT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.ifreeL, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.ffreeL, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<dep_resource_conflict_check (*)>::ser(x.idcl, p = ::align<dep_resource_conflict_check (*)>(p), reg); p = add<dep_resource_conflict_check (*)>(p);
        serdes<dep_resource_conflict_check (*)>::ser(x.fdcl, p = ::align<dep_resource_conflict_check (*)>(p), reg); p = add<dep_resource_conflict_check (*)>(p);
        serdes<ArrayST (*)>::ser(x.RAHT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<bool>::ser(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(RENAMINGU &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<ArrayST (*)>::des(x.iFRAT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.fFRAT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.iRRAT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.fRRAT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.ifreeL, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.ffreeL, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<dep_resource_conflict_check (*)>::des(x.idcl, p = ::align<dep_resource_conflict_check (*)>(p), reg); p = add<dep_resource_conflict_check (*)>(p);
        serdes<dep_resource_conflict_check (*)>::des(x.fdcl, p = ::align<dep_resource_conflict_check (*)>(p), reg); p = add<dep_resource_conflict_check (*)>(p);
        serdes<ArrayST (*)>::des(x.RAHT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<bool>::des(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: core.h:99|7
parents: core.h
*/
template<>
struct serdes<SchedulerU> {
    static constexpr size_t size = alignadd<bool>(alignadd<selection_logic (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<CoreDynParam>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<CoreDynParam>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<selection_logic (*)>::align), serdes<bool>::align);

    static void ser(const SchedulerU &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.Iw_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.fp_Iw_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.ROB_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<ArrayST (*)>::ser(x.int_inst_window, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.fp_inst_window, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.ROB, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<selection_logic (*)>::ser(x.instruction_selection, p = ::align<selection_logic (*)>(p), reg); p = add<selection_logic (*)>(p);
        serdes<bool>::ser(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(SchedulerU &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.Iw_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.fp_Iw_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.ROB_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<ArrayST (*)>::des(x.int_inst_window, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.fp_inst_window, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.ROB, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<selection_logic (*)>::des(x.instruction_selection, p = ::align<selection_logic (*)>(p), reg); p = add<selection_logic (*)>(p);
        serdes<bool>::des(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: core.h:49|7
parents: core.h
*/
template<>
struct serdes<BranchPredictor> {
    static constexpr size_t size = alignadd<bool>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<CoreDynParam>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0)))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<CoreDynParam>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<bool>::align);

    static void ser(const BranchPredictor &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<ArrayST (*)>::ser(x.globalBPT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.localBPT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.L1_localBPT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.L2_localBPT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.chooser, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.RAS, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<bool>::ser(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(BranchPredictor &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<ArrayST (*)>::des(x.globalBPT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.localBPT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.L1_localBPT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.L2_localBPT, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.chooser, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.RAS, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<bool>::des(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: array.h:70|7
parents: array.h
*/
template<>
struct serdes<InstCache> {
    static constexpr size_t size = alignadd<powerDef>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<Component>(0))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<powerDef>::align);

    static void ser(const InstCache &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ArrayST (*)>::ser(x.caches, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.missb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.ifb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.prefetchb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<powerDef>::ser(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
    static void des(InstCache &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ArrayST (*)>::des(x.caches, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.missb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.ifb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.prefetchb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<powerDef>::des(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
};

/*
location: core.h:73|7
parents: core.h
*/
template<>
struct serdes<InstFetchU> {
    static constexpr size_t size = alignadd<bool>(alignadd<inst_decoder (*)>(alignadd<inst_decoder (*)>(alignadd<inst_decoder (*)>(alignadd<BranchPredictor (*)>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<InstCache>(alignadd<unsigned int>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<CoreDynParam>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0)))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<CoreDynParam>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<unsigned int>::align), serdes<InstCache>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<BranchPredictor (*)>::align), serdes<inst_decoder (*)>::align), serdes<inst_decoder (*)>::align), serdes<inst_decoder (*)>::align), serdes<bool>::align);

    static void ser(const InstFetchU &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.cache_p); p = add<unsigned int>(p);
        serdes<InstCache>::ser(x.icache, p = ::align<InstCache>(p), reg); p = add<InstCache>(p);
        serdes<ArrayST (*)>::ser(x.IB, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.BTB, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<BranchPredictor (*)>::ser(x.BPT, p = ::align<BranchPredictor (*)>(p), reg); p = add<BranchPredictor (*)>(p);
        serdes<inst_decoder (*)>::ser(x.ID_inst, p = ::align<inst_decoder (*)>(p), reg); p = add<inst_decoder (*)>(p);
        serdes<inst_decoder (*)>::ser(x.ID_operand, p = ::align<inst_decoder (*)>(p), reg); p = add<inst_decoder (*)>(p);
        serdes<inst_decoder (*)>::ser(x.ID_misc, p = ::align<inst_decoder (*)>(p), reg); p = add<inst_decoder (*)>(p);
        serdes<bool>::ser(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(InstFetchU &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        x.cache_p = static_cast<Cache_policy>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<InstCache>::des(x.icache, p = ::align<InstCache>(p), reg); p = add<InstCache>(p);
        serdes<ArrayST (*)>::des(x.IB, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.BTB, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<BranchPredictor (*)>::des(x.BPT, p = ::align<BranchPredictor (*)>(p), reg); p = add<BranchPredictor (*)>(p);
        serdes<inst_decoder (*)>::des(x.ID_inst, p = ::align<inst_decoder (*)>(p), reg); p = add<inst_decoder (*)>(p);
        serdes<inst_decoder (*)>::des(x.ID_operand, p = ::align<inst_decoder (*)>(p), reg); p = add<inst_decoder (*)>(p);
        serdes<inst_decoder (*)>::des(x.ID_misc, p = ::align<inst_decoder (*)>(p), reg); p = add<inst_decoder (*)>(p);
        serdes<bool>::des(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: array.h:90|7
parents: array.h
*/
template<>
struct serdes<DataCache> {
    static constexpr size_t size = alignadd<ArrayST (*)>(alignadd<InstCache>(0));
    static constexpr size_t align = std::max(std::max((size_t) 1, serdes<InstCache>::align), serdes<ArrayST (*)>::align);

    static void ser(const DataCache &x, size_t p, ser_reg &reg) {
        serdes<InstCache>::ser(*static_cast<const InstCache *>(&x), p = ::align<InstCache>(p), reg); p = add<InstCache>(p);
        serdes<ArrayST (*)>::ser(x.wbb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
    }
    static void des(DataCache &x, const uint8_t *p, des_reg &reg) {
        serdes<InstCache>::des(*static_cast<InstCache *>(&x), p = ::align<InstCache>(p), reg); p = add<InstCache>(p);
        serdes<ArrayST (*)>::des(x.wbb, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
    }
};

/*
location: sharedcache.h:68|7
parents: sharedcache.h
*/
template<>
struct serdes<CCdir> {
    static constexpr size_t size = alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<ArrayST (*)>(alignadd<DataCache>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0)))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<DataCache>::align), serdes<ArrayST (*)>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align);

    static void ser(const CCdir &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCache, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<DataCache>::ser(x.dc, p = ::align<DataCache>(p), reg); p = add<DataCache>(p);
        serdes<ArrayST (*)>::ser(x.shadow_dir, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<Component>::ser(x.L2Tot, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.cc, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.cc1, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.ccTot, p = ::align<Component>(p), reg); p = add<Component>(p);
    }
    static void des(CCdir &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCache, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<DataCache>::des(x.dc, p = ::align<DataCache>(p), reg); p = add<DataCache>(p);
        serdes<ArrayST (*)>::des(x.shadow_dir, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<Component>::des(x.L2Tot, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.cc, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.cc1, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.ccTot, p = ::align<Component>(p), reg); p = add<Component>(p);
    }
};

/*
location: sharedcache.h:42|7
parents: sharedcache.h
*/
template<>
struct serdes<SharedCache> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<statsDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<CacheDynParam>(alignadd<DataCache>(alignadd<unsigned int>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0)))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<unsigned int>::align), serdes<DataCache>::align), serdes<CacheDynParam>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const SharedCache &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCache, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.cacheL); p = add<unsigned int>(p);
        serdes<DataCache>::ser(x.unicache, p = ::align<DataCache>(p), reg); p = add<DataCache>(p);
        serdes<CacheDynParam>::ser(x.cachep, p = ::align<CacheDynParam>(p), reg); p = add<CacheDynParam>(p);
        serdes<statsDef>::ser(x.homenode_tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.homenode_rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.homenode_stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<double>::ser(x.dir_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(SharedCache &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCache, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        x.cacheL = static_cast<cache_level>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<DataCache>::des(x.unicache, p = ::align<DataCache>(p), reg); p = add<DataCache>(p);
        serdes<CacheDynParam>::des(x.cachep, p = ::align<CacheDynParam>(p), reg); p = add<CacheDynParam>(p);
        serdes<statsDef>::des(x.homenode_tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.homenode_rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.homenode_stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<double>::des(x.dir_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: core.h:147|7
parents: core.h
*/
template<>
struct serdes<LoadStoreU> {
    static constexpr size_t size = alignadd<bool>(alignadd<ArrayST (*)>(alignadd<ArrayST (*)>(alignadd<DataCache>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<unsigned int>(alignadd<CoreDynParam>(alignadd<InputParameter>(alignadd<int>(alignadd<ParseXML (*)>(alignadd<Component>(0))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<ParseXML (*)>::align), serdes<int>::align), serdes<InputParameter>::align), serdes<CoreDynParam>::align), serdes<unsigned int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<DataCache>::align), serdes<ArrayST (*)>::align), serdes<ArrayST (*)>::align), serdes<bool>::align);

    static void ser(const LoadStoreU &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::ser(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::ser(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::ser(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::ser(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.cache_p); p = add<unsigned int>(p);
        serdes<double>::ser(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.lsq_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<DataCache>::ser(x.dcache, p = ::align<DataCache>(p), reg); p = add<DataCache>(p);
        serdes<ArrayST (*)>::ser(x.LSQ, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::ser(x.LoadQ, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<bool>::ser(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(LoadStoreU &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<ParseXML (*)>::des(x.XML, p = ::align<ParseXML (*)>(p), reg); p = add<ParseXML (*)>(p);
        serdes<int>::des(x.ithCore, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<InputParameter>::des(x.interface_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<CoreDynParam>::des(x.coredynp, p = ::align<CoreDynParam>(p), reg); p = add<CoreDynParam>(p);
        x.cache_p = static_cast<Cache_policy>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<double>::des(x.clockRate, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.executionTime, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.scktRatio, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.chip_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.macro_PR_overhead, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.lsq_height, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<DataCache>::des(x.dcache, p = ::align<DataCache>(p), reg); p = add<DataCache>(p);
        serdes<ArrayST (*)>::des(x.LSQ, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<ArrayST (*)>::des(x.LoadQ, p = ::align<ArrayST (*)>(p), reg); p = add<ArrayST (*)>(p);
        serdes<bool>::des(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: array.h:45|7
parents: array.h
*/
template<>
struct serdes<ArrayST> {
    static constexpr size_t size = alignadd<powerDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<statsDef>(alignadd<uca_org_t>(alignadd<bool>(alignadd<unsigned int>(alignadd<bool>(alignadd<unsigned int>(alignadd<std::basic_string<char>>(alignadd<InputParameter>(alignadd<Component>(0))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<InputParameter>::align), serdes<std::basic_string<char>>::align), serdes<unsigned int>::align), serdes<bool>::align), serdes<unsigned int>::align), serdes<bool>::align), serdes<uca_org_t>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<statsDef>::align), serdes<powerDef>::align);

    static void ser(const ArrayST &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::ser(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<std::basic_string<char>>::ser(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.device_ty); p = add<unsigned int>(p);
        serdes<bool>::ser(x.opt_local, p = ::align<bool>(p), reg); p = add<bool>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.core_ty); p = add<unsigned int>(p);
        serdes<bool>::ser(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<uca_org_t>::ser(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<statsDef>::ser(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::ser(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::ser(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
    static void des(ArrayST &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<InputParameter>::des(x.l_ip, p = ::align<InputParameter>(p), reg); p = add<InputParameter>(p);
        serdes<std::basic_string<char>>::des(x.name, p = ::align<std::basic_string<char>>(p), reg); p = add<std::basic_string<char>>(p);
        x.device_ty = static_cast<Device_ty>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<bool>::des(x.opt_local, p = ::align<bool>(p), reg); p = add<bool>(p);
        x.core_ty = static_cast<Core_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<bool>::des(x.is_default, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<uca_org_t>::des(x.local_result, p = ::align<uca_org_t>(p), reg); p = add<uca_org_t>(p);
        serdes<statsDef>::des(x.tdp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.rtp_stats, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<statsDef>::des(x.stats_t, p = ::align<statsDef>(p), reg); p = add<statsDef>(p);
        serdes<powerDef>::des(x.power_t, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
};

/*
location: cacti/subarray.h:44|7
parents: cacti/subarray.h
*/
template<>
struct serdes<Subarray> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<Area>(alignadd<Area>(alignadd<int>(alignadd<int>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<std::remove_reference<const DynamicParameter (&)>::type *>(alignadd<Component>(0)))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<std::remove_reference<const DynamicParameter (&)>::type *>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<int>::align), serdes<int>::align), serdes<Area>::align), serdes<Area>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const Subarray &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<std::remove_reference<const DynamicParameter (&)>::type *>::ser(*(std::remove_reference<const DynamicParameter (&)>::type **) ((uint8_t *) &x + offsetof(Subarray, dp)), p = ::align<std::remove_reference<const DynamicParameter (&)>::type *>(p), reg); p = add<std::remove_reference<const DynamicParameter (&)>::type *>(p);
        serdes<unsigned int>::ser(x.num_rows, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::ser(x.num_cols, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<int>::ser(x.num_cols_fa_cam, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_cols_fa_ram, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<Area>::ser(x.cell, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<Area>::ser(x.cam_cell, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<bool>::ser(x.is_fa, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.C_wl, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.C_wl_cam, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.C_wl_ram, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.R_wl, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.R_wl_cam, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.R_wl_ram, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.C_bl, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.C_bl_cam, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(Subarray &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<std::remove_reference<const DynamicParameter (&)>::type *>::des(*(std::remove_reference<const DynamicParameter (&)>::type **) ((uint8_t *) &x + offsetof(Subarray, dp)), p = ::align<std::remove_reference<const DynamicParameter (&)>::type *>(p), reg); p = add<std::remove_reference<const DynamicParameter (&)>::type *>(p);
        serdes<unsigned int>::des(x.num_rows, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<unsigned int>::des(x.num_cols, p = ::align<unsigned int>(p), reg); p = add<unsigned int>(p);
        serdes<int>::des(x.num_cols_fa_cam, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_cols_fa_ram, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<Area>::des(x.cell, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<Area>::des(x.cam_cell, p = ::align<Area>(p), reg); p = add<Area>(p);
        serdes<bool>::des(x.is_fa, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.C_wl, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.C_wl_cam, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.C_wl_ram, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.R_wl, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.R_wl_cam, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.R_wl_ram, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.C_bl, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.C_bl_cam, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

namespace {
template<class Token, TechnologyParameter::DeviceType (*(Router::*Member))>
struct hack_Accessor_44 {
    friend constexpr TechnologyParameter::DeviceType (*(Router::*hack_Access_44(Token *))) {
        return Member;
    }
};
struct hack_Token_44 {
    friend constexpr TechnologyParameter::DeviceType (*(Router::*hack_Access_44(hack_Token_44*)));
};
template struct hack_Accessor_44<
    hack_Token_44, &Router::deviceType
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_45 {
    friend constexpr double (Router::*hack_Access_45(Token *)) {
        return Member;
    }
};
struct hack_Token_45 {
    friend constexpr double (Router::*hack_Access_45(hack_Token_45*));
};
template struct hack_Accessor_45<
    hack_Token_45, &Router::FREQUENCY
>;
}


namespace {
template<class Token, Wire_type (Router::*Member)>
struct hack_Accessor_46 {
    friend constexpr Wire_type (Router::*hack_Access_46(Token *)) {
        return Member;
    }
};
struct hack_Token_46 {
    friend constexpr Wire_type (Router::*hack_Access_46(hack_Token_46*));
};
template struct hack_Accessor_46<
    hack_Token_46, &Router::wtype
>;
}


namespace {
template<class Token, Wire_placement (Router::*Member)>
struct hack_Accessor_47 {
    friend constexpr Wire_placement (Router::*hack_Access_47(Token *)) {
        return Member;
    }
};
struct hack_Token_47 {
    friend constexpr Wire_placement (Router::*hack_Access_47(hack_Token_47*));
};
template struct hack_Accessor_47<
    hack_Token_47, &Router::wire_placement
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_48 {
    friend constexpr double (Router::*hack_Access_48(Token *)) {
        return Member;
    }
};
struct hack_Token_48 {
    friend constexpr double (Router::*hack_Access_48(hack_Token_48*));
};
template struct hack_Accessor_48<
    hack_Token_48, &Router::NTtr
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_49 {
    friend constexpr double (Router::*hack_Access_49(Token *)) {
        return Member;
    }
};
struct hack_Token_49 {
    friend constexpr double (Router::*hack_Access_49(hack_Token_49*));
};
template struct hack_Accessor_49<
    hack_Token_49, &Router::PTtr
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_50 {
    friend constexpr double (Router::*hack_Access_50(Token *)) {
        return Member;
    }
};
struct hack_Token_50 {
    friend constexpr double (Router::*hack_Access_50(hack_Token_50*));
};
template struct hack_Accessor_50<
    hack_Token_50, &Router::wt
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_51 {
    friend constexpr double (Router::*hack_Access_51(Token *)) {
        return Member;
    }
};
struct hack_Token_51 {
    friend constexpr double (Router::*hack_Access_51(hack_Token_51*));
};
template struct hack_Accessor_51<
    hack_Token_51, &Router::ht
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_52 {
    friend constexpr double (Router::*hack_Access_52(Token *)) {
        return Member;
    }
};
struct hack_Token_52 {
    friend constexpr double (Router::*hack_Access_52(hack_Token_52*));
};
template struct hack_Accessor_52<
    hack_Token_52, &Router::I
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_53 {
    friend constexpr double (Router::*hack_Access_53(Token *)) {
        return Member;
    }
};
struct hack_Token_53 {
    friend constexpr double (Router::*hack_Access_53(hack_Token_53*));
};
template struct hack_Accessor_53<
    hack_Token_53, &Router::O
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_54 {
    friend constexpr double (Router::*hack_Access_54(Token *)) {
        return Member;
    }
};
struct hack_Token_54 {
    friend constexpr double (Router::*hack_Access_54(hack_Token_54*));
};
template struct hack_Accessor_54<
    hack_Token_54, &Router::NTi
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_55 {
    friend constexpr double (Router::*hack_Access_55(Token *)) {
        return Member;
    }
};
struct hack_Token_55 {
    friend constexpr double (Router::*hack_Access_55(hack_Token_55*));
};
template struct hack_Accessor_55<
    hack_Token_55, &Router::PTi
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_56 {
    friend constexpr double (Router::*hack_Access_56(Token *)) {
        return Member;
    }
};
struct hack_Token_56 {
    friend constexpr double (Router::*hack_Access_56(hack_Token_56*));
};
template struct hack_Accessor_56<
    hack_Token_56, &Router::NTid
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_57 {
    friend constexpr double (Router::*hack_Access_57(Token *)) {
        return Member;
    }
};
struct hack_Token_57 {
    friend constexpr double (Router::*hack_Access_57(hack_Token_57*));
};
template struct hack_Accessor_57<
    hack_Token_57, &Router::PTid
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_58 {
    friend constexpr double (Router::*hack_Access_58(Token *)) {
        return Member;
    }
};
struct hack_Token_58 {
    friend constexpr double (Router::*hack_Access_58(hack_Token_58*));
};
template struct hack_Accessor_58<
    hack_Token_58, &Router::NTod
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_59 {
    friend constexpr double (Router::*hack_Access_59(Token *)) {
        return Member;
    }
};
struct hack_Token_59 {
    friend constexpr double (Router::*hack_Access_59(hack_Token_59*));
};
template struct hack_Accessor_59<
    hack_Token_59, &Router::PTod
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_60 {
    friend constexpr double (Router::*hack_Access_60(Token *)) {
        return Member;
    }
};
struct hack_Token_60 {
    friend constexpr double (Router::*hack_Access_60(hack_Token_60*));
};
template struct hack_Accessor_60<
    hack_Token_60, &Router::TriS1
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_61 {
    friend constexpr double (Router::*hack_Access_61(Token *)) {
        return Member;
    }
};
struct hack_Token_61 {
    friend constexpr double (Router::*hack_Access_61(hack_Token_61*));
};
template struct hack_Accessor_61<
    hack_Token_61, &Router::TriS2
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_62 {
    friend constexpr double (Router::*hack_Access_62(Token *)) {
        return Member;
    }
};
struct hack_Token_62 {
    friend constexpr double (Router::*hack_Access_62(hack_Token_62*));
};
template struct hack_Accessor_62<
    hack_Token_62, &Router::M
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_63 {
    friend constexpr double (Router::*hack_Access_63(Token *)) {
        return Member;
    }
};
struct hack_Token_63 {
    friend constexpr double (Router::*hack_Access_63(hack_Token_63*));
};
template struct hack_Accessor_63<
    hack_Token_63, &Router::Vdd
>;
}


namespace {
template<class Token, double (Router::*Member)>
struct hack_Accessor_64 {
    friend constexpr double (Router::*hack_Access_64(Token *)) {
        return Member;
    }
};
struct hack_Token_64 {
    friend constexpr double (Router::*hack_Access_64(hack_Token_64*));
};
template struct hack_Accessor_64<
    hack_Token_64, &Router::min_w_pmos
>;
}


/*
location: cacti/router.h:50|7
parents: cacti/router.h
*/
template<>
struct serdes<Router> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<unsigned int>(alignadd<unsigned int>(alignadd<double>(alignadd<TechnologyParameter::DeviceType (*)>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<Component>(alignadd<Component>(alignadd<Component>(alignadd<Component>(0))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<Component>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<TechnologyParameter::DeviceType (*)>::align), serdes<double>::align), serdes<unsigned int>::align), serdes<unsigned int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const Router &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.arbiter, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.crossbar, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::ser(x.buffer, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<double>::ser(x.cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.max_cyc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.flit_size, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vc_count, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vc_buffer_size, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<TechnologyParameter::DeviceType (*)>::ser(x.*hack_Access_44(static_cast<hack_Token_44 *>(nullptr)), p = ::align<TechnologyParameter::DeviceType (*)>(p), reg); p = add<TechnologyParameter::DeviceType (*)>(p);
        serdes<double>::ser(x.*hack_Access_45(static_cast<hack_Token_45 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.*hack_Access_46(static_cast<hack_Token_46 *>(nullptr))); p = add<unsigned int>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.*hack_Access_47(static_cast<hack_Token_47 *>(nullptr))); p = add<unsigned int>(p);
        serdes<double>::ser(x.*hack_Access_48(static_cast<hack_Token_48 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_49(static_cast<hack_Token_49 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_50(static_cast<hack_Token_50 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_51(static_cast<hack_Token_51 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_52(static_cast<hack_Token_52 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_53(static_cast<hack_Token_53 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_54(static_cast<hack_Token_54 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_55(static_cast<hack_Token_55 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_56(static_cast<hack_Token_56 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_57(static_cast<hack_Token_57 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_58(static_cast<hack_Token_58 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_59(static_cast<hack_Token_59 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_60(static_cast<hack_Token_60 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_61(static_cast<hack_Token_61 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_62(static_cast<hack_Token_62 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_63(static_cast<hack_Token_63 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_64(static_cast<hack_Token_64 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(Router &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.arbiter, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.crossbar, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Component>::des(x.buffer, p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<double>::des(x.cycle_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.max_cyc, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.flit_size, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vc_count, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vc_buffer_size, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<TechnologyParameter::DeviceType (*)>::des(x.*hack_Access_44(static_cast<hack_Token_44 *>(nullptr)), p = ::align<TechnologyParameter::DeviceType (*)>(p), reg); p = add<TechnologyParameter::DeviceType (*)>(p);
        serdes<double>::des(x.*hack_Access_45(static_cast<hack_Token_45 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        x.*hack_Access_46(static_cast<hack_Token_46 *>(nullptr)) = static_cast<Wire_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        x.*hack_Access_47(static_cast<hack_Token_47 *>(nullptr)) = static_cast<Wire_placement>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<double>::des(x.*hack_Access_48(static_cast<hack_Token_48 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_49(static_cast<hack_Token_49 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_50(static_cast<hack_Token_50 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_51(static_cast<hack_Token_51 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_52(static_cast<hack_Token_52 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_53(static_cast<hack_Token_53 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_54(static_cast<hack_Token_54 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_55(static_cast<hack_Token_55 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_56(static_cast<hack_Token_56 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_57(static_cast<hack_Token_57 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_58(static_cast<hack_Token_58 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_59(static_cast<hack_Token_59 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_60(static_cast<hack_Token_60 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_61(static_cast<hack_Token_61 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_62(static_cast<hack_Token_62 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_63(static_cast<hack_Token_63 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_64(static_cast<hack_Token_64 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
    }
};

/*
location: cacti/powergating.h:37|7
parents: cacti/powergating.h
*/
template<>
struct serdes<Sleep_tx> {
    static constexpr size_t size = alignadd<double>(alignadd<bool>(alignadd<std::remove_reference<const Area (&)>::type *>(alignadd<powerDef>(alignadd<powerDef>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<Component>(0))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<std::remove_reference<const Area (&)>::type *>::align), serdes<bool>::align), serdes<double>::align);

    static void ser(const Sleep_tx &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<double>::ser(x.perf_with_sleep_tx, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.active_Isat, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.is_footer, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.num_sleep_tx, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.vt_circuit, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vt_sleep_tx, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.mobility, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.c_ox, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.c_circuit_wakeup, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.c_intrinsic_sleep, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.wakeup_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::ser(x.power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.wakeup_power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<std::remove_reference<const Area (&)>::type *>::ser(*(std::remove_reference<const Area (&)>::type **) ((uint8_t *) &x + offsetof(Sleep_tx, cell)), p = ::align<std::remove_reference<const Area (&)>::type *>(p), reg); p = add<std::remove_reference<const Area (&)>::type *>(p);
        serdes<bool>::ser(x.is_sleep_tx, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.V_delta, p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(Sleep_tx &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<double>::des(x.perf_with_sleep_tx, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.active_Isat, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.is_footer, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.num_sleep_tx, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.vt_circuit, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vt_sleep_tx, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.vdd, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.mobility, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.c_ox, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.width, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.c_circuit_wakeup, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.c_intrinsic_sleep, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.wakeup_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::des(x.power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.wakeup_power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<std::remove_reference<const Area (&)>::type *>::des(*(std::remove_reference<const Area (&)>::type **) ((uint8_t *) &x + offsetof(Sleep_tx, cell)), p = ::align<std::remove_reference<const Area (&)>::type *>(p), reg); p = add<std::remove_reference<const Area (&)>::type *>(p);
        serdes<bool>::des(x.is_sleep_tx, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.V_delta, p = ::align<double>(p), reg); p = add<double>(p);
    }
};

namespace {
template<class Token, double (Htree2::*Member)>
struct hack_Accessor_24 {
    friend constexpr double (Htree2::*hack_Access_24(Token *)) {
        return Member;
    }
};
struct hack_Token_24 {
    friend constexpr double (Htree2::*hack_Access_24(hack_Token_24*));
};
template struct hack_Accessor_24<
    hack_Token_24, &Htree2::wire_bw
>;
}


namespace {
template<class Token, double (Htree2::*Member)>
struct hack_Accessor_25 {
    friend constexpr double (Htree2::*hack_Access_25(Token *)) {
        return Member;
    }
};
struct hack_Token_25 {
    friend constexpr double (Htree2::*hack_Access_25(hack_Token_25*));
};
template struct hack_Accessor_25<
    hack_Token_25, &Htree2::init_wire_bw
>;
}


namespace {
template<class Token, Htree_type (Htree2::*Member)>
struct hack_Accessor_26 {
    friend constexpr Htree_type (Htree2::*hack_Access_26(Token *)) {
        return Member;
    }
};
struct hack_Token_26 {
    friend constexpr Htree_type (Htree2::*hack_Access_26(hack_Token_26*));
};
template struct hack_Accessor_26<
    hack_Token_26, &Htree2::tree_type
>;
}


namespace {
template<class Token, double (Htree2::*Member)>
struct hack_Accessor_27 {
    friend constexpr double (Htree2::*hack_Access_27(Token *)) {
        return Member;
    }
};
struct hack_Token_27 {
    friend constexpr double (Htree2::*hack_Access_27(hack_Token_27*));
};
template struct hack_Accessor_27<
    hack_Token_27, &Htree2::htree_hnodes
>;
}


namespace {
template<class Token, double (Htree2::*Member)>
struct hack_Accessor_28 {
    friend constexpr double (Htree2::*hack_Access_28(Token *)) {
        return Member;
    }
};
struct hack_Token_28 {
    friend constexpr double (Htree2::*hack_Access_28(hack_Token_28*));
};
template struct hack_Accessor_28<
    hack_Token_28, &Htree2::htree_vnodes
>;
}


namespace {
template<class Token, double (Htree2::*Member)>
struct hack_Accessor_29 {
    friend constexpr double (Htree2::*hack_Access_29(Token *)) {
        return Member;
    }
};
struct hack_Token_29 {
    friend constexpr double (Htree2::*hack_Access_29(hack_Token_29*));
};
template struct hack_Accessor_29<
    hack_Token_29, &Htree2::mat_width
>;
}


namespace {
template<class Token, double (Htree2::*Member)>
struct hack_Accessor_30 {
    friend constexpr double (Htree2::*hack_Access_30(Token *)) {
        return Member;
    }
};
struct hack_Token_30 {
    friend constexpr double (Htree2::*hack_Access_30(hack_Token_30*));
};
template struct hack_Accessor_30<
    hack_Token_30, &Htree2::mat_height
>;
}


namespace {
template<class Token, int (Htree2::*Member)>
struct hack_Accessor_31 {
    friend constexpr int (Htree2::*hack_Access_31(Token *)) {
        return Member;
    }
};
struct hack_Token_31 {
    friend constexpr int (Htree2::*hack_Access_31(hack_Token_31*));
};
template struct hack_Accessor_31<
    hack_Token_31, &Htree2::add_bits
>;
}


namespace {
template<class Token, int (Htree2::*Member)>
struct hack_Accessor_32 {
    friend constexpr int (Htree2::*hack_Access_32(Token *)) {
        return Member;
    }
};
struct hack_Token_32 {
    friend constexpr int (Htree2::*hack_Access_32(hack_Token_32*));
};
template struct hack_Accessor_32<
    hack_Token_32, &Htree2::data_in_bits
>;
}


namespace {
template<class Token, int (Htree2::*Member)>
struct hack_Accessor_33 {
    friend constexpr int (Htree2::*hack_Access_33(Token *)) {
        return Member;
    }
};
struct hack_Token_33 {
    friend constexpr int (Htree2::*hack_Access_33(hack_Token_33*));
};
template struct hack_Accessor_33<
    hack_Token_33, &Htree2::search_data_in_bits
>;
}


namespace {
template<class Token, int (Htree2::*Member)>
struct hack_Accessor_34 {
    friend constexpr int (Htree2::*hack_Access_34(Token *)) {
        return Member;
    }
};
struct hack_Token_34 {
    friend constexpr int (Htree2::*hack_Access_34(hack_Token_34*));
};
template struct hack_Accessor_34<
    hack_Token_34, &Htree2::data_out_bits
>;
}


namespace {
template<class Token, int (Htree2::*Member)>
struct hack_Accessor_35 {
    friend constexpr int (Htree2::*hack_Access_35(Token *)) {
        return Member;
    }
};
struct hack_Token_35 {
    friend constexpr int (Htree2::*hack_Access_35(hack_Token_35*));
};
template struct hack_Accessor_35<
    hack_Token_35, &Htree2::search_data_out_bits
>;
}


namespace {
template<class Token, int (Htree2::*Member)>
struct hack_Accessor_36 {
    friend constexpr int (Htree2::*hack_Access_36(Token *)) {
        return Member;
    }
};
struct hack_Token_36 {
    friend constexpr int (Htree2::*hack_Access_36(hack_Token_36*));
};
template struct hack_Accessor_36<
    hack_Token_36, &Htree2::ndbl
>;
}


namespace {
template<class Token, int (Htree2::*Member)>
struct hack_Accessor_37 {
    friend constexpr int (Htree2::*hack_Access_37(Token *)) {
        return Member;
    }
};
struct hack_Token_37 {
    friend constexpr int (Htree2::*hack_Access_37(hack_Token_37*));
};
template struct hack_Accessor_37<
    hack_Token_37, &Htree2::ndwl
>;
}


namespace {
template<class Token, bool (Htree2::*Member)>
struct hack_Accessor_38 {
    friend constexpr bool (Htree2::*hack_Access_38(Token *)) {
        return Member;
    }
};
struct hack_Token_38 {
    friend constexpr bool (Htree2::*hack_Access_38(hack_Token_38*));
};
template struct hack_Accessor_38<
    hack_Token_38, &Htree2::uca_tree
>;
}


namespace {
template<class Token, bool (Htree2::*Member)>
struct hack_Accessor_39 {
    friend constexpr bool (Htree2::*hack_Access_39(Token *)) {
        return Member;
    }
};
struct hack_Token_39 {
    friend constexpr bool (Htree2::*hack_Access_39(hack_Token_39*));
};
template struct hack_Accessor_39<
    hack_Token_39, &Htree2::search_tree
>;
}


namespace {
template<class Token, Wire_type (Htree2::*Member)>
struct hack_Accessor_40 {
    friend constexpr Wire_type (Htree2::*hack_Access_40(Token *)) {
        return Member;
    }
};
struct hack_Token_40 {
    friend constexpr Wire_type (Htree2::*hack_Access_40(hack_Token_40*));
};
template struct hack_Accessor_40<
    hack_Token_40, &Htree2::wt
>;
}


namespace {
template<class Token, double (Htree2::*Member)>
struct hack_Accessor_41 {
    friend constexpr double (Htree2::*hack_Access_41(Token *)) {
        return Member;
    }
};
struct hack_Token_41 {
    friend constexpr double (Htree2::*hack_Access_41(hack_Token_41*));
};
template struct hack_Accessor_41<
    hack_Token_41, &Htree2::min_w_nmos
>;
}


namespace {
template<class Token, double (Htree2::*Member)>
struct hack_Accessor_42 {
    friend constexpr double (Htree2::*hack_Access_42(Token *)) {
        return Member;
    }
};
struct hack_Token_42 {
    friend constexpr double (Htree2::*hack_Access_42(hack_Token_42*));
};
template struct hack_Accessor_42<
    hack_Token_42, &Htree2::min_w_pmos
>;
}


namespace {
template<class Token, TechnologyParameter::DeviceType (*(Htree2::*Member))>
struct hack_Accessor_43 {
    friend constexpr TechnologyParameter::DeviceType (*(Htree2::*hack_Access_43(Token *))) {
        return Member;
    }
};
struct hack_Token_43 {
    friend constexpr TechnologyParameter::DeviceType (*(Htree2::*hack_Access_43(hack_Token_43*)));
};
template struct hack_Accessor_43<
    hack_Token_43, &Htree2::deviceType
>;
}


/*
location: cacti/htree2.h:47|7
parents: cacti/htree2.h
*/
template<>
struct serdes<Htree2> {
    static constexpr size_t size = alignadd<TechnologyParameter::DeviceType (*)>(alignadd<double>(alignadd<double>(alignadd<unsigned int>(alignadd<bool>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<unsigned int>(alignadd<double>(alignadd<double>(alignadd<powerDef>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<Component>(0)))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<powerDef>::align), serdes<double>::align), serdes<double>::align), serdes<unsigned int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<bool>::align), serdes<unsigned int>::align), serdes<double>::align), serdes<double>::align), serdes<TechnologyParameter::DeviceType (*)>::align);

    static void ser(const Htree2 &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<double>::ser(x.in_rise_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.out_rise_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.max_unpipelined_link_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::ser(x.power_bit, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::ser(x.*hack_Access_24(static_cast<hack_Token_24 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_25(static_cast<hack_Token_25 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.*hack_Access_26(static_cast<hack_Token_26 *>(nullptr))); p = add<unsigned int>(p);
        serdes<double>::ser(x.*hack_Access_27(static_cast<hack_Token_27 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_28(static_cast<hack_Token_28 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_29(static_cast<hack_Token_29 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_30(static_cast<hack_Token_30 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.*hack_Access_31(static_cast<hack_Token_31 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.*hack_Access_32(static_cast<hack_Token_32 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.*hack_Access_33(static_cast<hack_Token_33 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.*hack_Access_34(static_cast<hack_Token_34 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.*hack_Access_35(static_cast<hack_Token_35 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.*hack_Access_36(static_cast<hack_Token_36 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.*hack_Access_37(static_cast<hack_Token_37 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.*hack_Access_38(static_cast<hack_Token_38 *>(nullptr)), p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.*hack_Access_39(static_cast<hack_Token_39 *>(nullptr)), p = ::align<bool>(p), reg); p = add<bool>(p);
        *reinterpret_cast<unsigned int *>(reg.data.data() + (p = ::align<unsigned int>(p))) = static_cast<unsigned int>(x.*hack_Access_40(static_cast<hack_Token_40 *>(nullptr))); p = add<unsigned int>(p);
        serdes<double>::ser(x.*hack_Access_41(static_cast<hack_Token_41 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_42(static_cast<hack_Token_42 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<TechnologyParameter::DeviceType (*)>::ser(x.*hack_Access_43(static_cast<hack_Token_43 *>(nullptr)), p = ::align<TechnologyParameter::DeviceType (*)>(p), reg); p = add<TechnologyParameter::DeviceType (*)>(p);
    }
    static void des(Htree2 &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<double>::des(x.in_rise_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.out_rise_time, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.max_unpipelined_link_delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::des(x.power_bit, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<double>::des(x.*hack_Access_24(static_cast<hack_Token_24 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_25(static_cast<hack_Token_25 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        x.*hack_Access_26(static_cast<hack_Token_26 *>(nullptr)) = static_cast<Htree_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<double>::des(x.*hack_Access_27(static_cast<hack_Token_27 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_28(static_cast<hack_Token_28 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_29(static_cast<hack_Token_29 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_30(static_cast<hack_Token_30 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.*hack_Access_31(static_cast<hack_Token_31 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.*hack_Access_32(static_cast<hack_Token_32 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.*hack_Access_33(static_cast<hack_Token_33 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.*hack_Access_34(static_cast<hack_Token_34 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.*hack_Access_35(static_cast<hack_Token_35 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.*hack_Access_36(static_cast<hack_Token_36 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.*hack_Access_37(static_cast<hack_Token_37 *>(nullptr)), p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.*hack_Access_38(static_cast<hack_Token_38 *>(nullptr)), p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.*hack_Access_39(static_cast<hack_Token_39 *>(nullptr)), p = ::align<bool>(p), reg); p = add<bool>(p);
        x.*hack_Access_40(static_cast<hack_Token_40 *>(nullptr)) = static_cast<Wire_type>(*reinterpret_cast<const unsigned int *>(p = ::align<unsigned int>(p))); p = add<unsigned int>(p);
        serdes<double>::des(x.*hack_Access_41(static_cast<hack_Token_41 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_42(static_cast<hack_Token_42 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<TechnologyParameter::DeviceType (*)>::des(x.*hack_Access_43(static_cast<hack_Token_43 *>(nullptr)), p = ::align<TechnologyParameter::DeviceType (*)>(p), reg); p = add<TechnologyParameter::DeviceType (*)>(p);
    }
};

/*
location: cacti/decoder.h:241|7
parents: cacti/decoder.h
*/
template<>
struct serdes<Driver> {
    static constexpr size_t size = alignadd<bool>(alignadd<int>(alignadd<Sleep_tx (*)>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double ([20])>(alignadd<double ([20])>(alignadd<int>(alignadd<int>(alignadd<Component>(0)))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<int>::align), serdes<int>::align), serdes<double ([20])>::align), serdes<double ([20])>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<Sleep_tx (*)>::align), serdes<int>::align), serdes<bool>::align);

    static void ser(const Driver &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<int>::ser(x.number_gates, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.min_number_gates, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double ([20])>::ser(x.width_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::ser(x.width_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double>::ser(x.c_gate_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.c_wire_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.r_wire_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.is_dram_, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.total_driver_nwidth, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_driver_pwidth, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<Sleep_tx (*)>::ser(x.sleeptx, p = ::align<Sleep_tx (*)>(p), reg); p = add<Sleep_tx (*)>(p);
        serdes<int>::ser(x.nodes_DSTN, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.power_gating, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(Driver &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<int>::des(x.number_gates, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.min_number_gates, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double ([20])>::des(x.width_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::des(x.width_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double>::des(x.c_gate_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.c_wire_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.r_wire_load, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.is_dram_, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.total_driver_nwidth, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_driver_pwidth, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<Sleep_tx (*)>::des(x.sleeptx, p = ::align<Sleep_tx (*)>(p), reg); p = add<Sleep_tx (*)>(p);
        serdes<int>::des(x.nodes_DSTN, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.power_gating, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: cacti/decoder.h:214|7
parents: cacti/decoder.h
*/
template<>
struct serdes<Predec> {
    static constexpr size_t size = alignadd<powerDef>(alignadd<powerDef>(alignadd<PredecBlkDrv (*)>(alignadd<PredecBlkDrv (*)>(alignadd<PredecBlk (*)>(alignadd<PredecBlk (*)>(alignadd<Component>(0)))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<PredecBlk (*)>::align), serdes<PredecBlk (*)>::align), serdes<PredecBlkDrv (*)>::align), serdes<PredecBlkDrv (*)>::align), serdes<powerDef>::align), serdes<powerDef>::align);

    static void ser(const Predec &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<PredecBlk (*)>::ser(x.blk1, p = ::align<PredecBlk (*)>(p), reg); p = add<PredecBlk (*)>(p);
        serdes<PredecBlk (*)>::ser(x.blk2, p = ::align<PredecBlk (*)>(p), reg); p = add<PredecBlk (*)>(p);
        serdes<PredecBlkDrv (*)>::ser(x.drv1, p = ::align<PredecBlkDrv (*)>(p), reg); p = add<PredecBlkDrv (*)>(p);
        serdes<PredecBlkDrv (*)>::ser(x.drv2, p = ::align<PredecBlkDrv (*)>(p), reg); p = add<PredecBlkDrv (*)>(p);
        serdes<powerDef>::ser(x.block_power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.driver_power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
    static void des(Predec &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<PredecBlk (*)>::des(x.blk1, p = ::align<PredecBlk (*)>(p), reg); p = add<PredecBlk (*)>(p);
        serdes<PredecBlk (*)>::des(x.blk2, p = ::align<PredecBlk (*)>(p), reg); p = add<PredecBlk (*)>(p);
        serdes<PredecBlkDrv (*)>::des(x.drv1, p = ::align<PredecBlkDrv (*)>(p), reg); p = add<PredecBlkDrv (*)>(p);
        serdes<PredecBlkDrv (*)>::des(x.drv2, p = ::align<PredecBlkDrv (*)>(p), reg); p = add<PredecBlkDrv (*)>(p);
        serdes<powerDef>::des(x.block_power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.driver_power, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
    }
};

/*
location: cacti/decoder.h:151|7
parents: cacti/decoder.h
*/
template<>
struct serdes<PredecBlkDrv> {
    static constexpr size_t size = alignadd<int>(alignadd<bool>(alignadd<Decoder (*)>(alignadd<PredecBlk (*)>(alignadd<powerDef>(alignadd<powerDef>(alignadd<double>(alignadd<double>(alignadd<double ([20])>(alignadd<double ([20])>(alignadd<double ([20])>(alignadd<double ([20])>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<Component>(0))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double ([20])>::align), serdes<double ([20])>::align), serdes<double ([20])>::align), serdes<double ([20])>::align), serdes<double>::align), serdes<double>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<PredecBlk (*)>::align), serdes<Decoder (*)>::align), serdes<bool>::align), serdes<int>::align);

    static void ser(const PredecBlkDrv &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<int>::ser(x.flag_driver_exists, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_input_addr_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_gates_nand2_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_gates_nand3_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.min_number_gates, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_buffers_driving_1_nand2_load, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_buffers_driving_2_nand2_load, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_buffers_driving_4_nand2_load, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_buffers_driving_2_nand3_load, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_buffers_driving_8_nand3_load, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_buffers_nand3_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.c_load_nand2_path_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.c_load_nand3_path_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.r_load_nand2_path_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.r_load_nand3_path_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double ([20])>::ser(x.width_nand2_path_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::ser(x.width_nand2_path_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::ser(x.width_nand3_path_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::ser(x.width_nand3_path_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double>::ser(x.delay_nand2_path, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_nand3_path, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::ser(x.power_nand2_path, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_nand3_path, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<PredecBlk (*)>::ser(x.blk, p = ::align<PredecBlk (*)>(p), reg); p = add<PredecBlk (*)>(p);
        serdes<Decoder (*)>::ser(x.dec, p = ::align<Decoder (*)>(p), reg); p = add<Decoder (*)>(p);
        serdes<bool>::ser(x.is_dram_, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.way_select, p = ::align<int>(p), reg); p = add<int>(p);
    }
    static void des(PredecBlkDrv &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<int>::des(x.flag_driver_exists, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_input_addr_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_gates_nand2_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_gates_nand3_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.min_number_gates, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_buffers_driving_1_nand2_load, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_buffers_driving_2_nand2_load, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_buffers_driving_4_nand2_load, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_buffers_driving_2_nand3_load, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_buffers_driving_8_nand3_load, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_buffers_nand3_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.c_load_nand2_path_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.c_load_nand3_path_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.r_load_nand2_path_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.r_load_nand3_path_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double ([20])>::des(x.width_nand2_path_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::des(x.width_nand2_path_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::des(x.width_nand3_path_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::des(x.width_nand3_path_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double>::des(x.delay_nand2_path, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_nand3_path, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::des(x.power_nand2_path, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_nand3_path, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<PredecBlk (*)>::des(x.blk, p = ::align<PredecBlk (*)>(p), reg); p = add<PredecBlk (*)>(p);
        serdes<Decoder (*)>::des(x.dec, p = ::align<Decoder (*)>(p), reg); p = add<Decoder (*)>(p);
        serdes<bool>::des(x.is_dram_, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.way_select, p = ::align<int>(p), reg); p = add<int>(p);
    }
};

/*
location: cacti/decoder.h:98|7
parents: cacti/decoder.h
*/
template<>
struct serdes<PredecBlk> {
    static constexpr size_t size = alignadd<bool>(alignadd<powerDef>(alignadd<powerDef>(alignadd<powerDef>(alignadd<double>(alignadd<double>(alignadd<double ([20])>(alignadd<double ([20])>(alignadd<double ([20])>(alignadd<double ([20])>(alignadd<double ([20])>(alignadd<double ([20])>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<int>(alignadd<bool>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<bool>(alignadd<Decoder (*)>(alignadd<Component>(0))))))))))))))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<Decoder (*)>::align), serdes<bool>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<bool>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<int>::align), serdes<double ([20])>::align), serdes<double ([20])>::align), serdes<double ([20])>::align), serdes<double ([20])>::align), serdes<double ([20])>::align), serdes<double ([20])>::align), serdes<double>::align), serdes<double>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<powerDef>::align), serdes<bool>::align);

    static void ser(const PredecBlk &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Decoder (*)>::ser(x.dec, p = ::align<Decoder (*)>(p), reg); p = add<Decoder (*)>(p);
        serdes<bool>::ser(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.number_input_addr_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.C_ld_predec_blk_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.R_wire_predec_blk_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.branch_effort_nand2_gate_output, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.branch_effort_nand3_gate_output, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.flag_two_unique_paths, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.flag_L2_gate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_inputs_L1_gate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_gates_L1_nand2_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_gates_L1_nand3_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.number_gates_L2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.min_number_gates_L1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.min_number_gates_L2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_L1_active_nand2_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_L1_active_nand3_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double ([20])>::ser(x.w_L1_nand2_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::ser(x.w_L1_nand2_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::ser(x.w_L1_nand3_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::ser(x.w_L1_nand3_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::ser(x.w_L2_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::ser(x.w_L2_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double>::ser(x.delay_nand2_path, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.delay_nand3_path, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::ser(x.power_nand2_path, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_nand3_path, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::ser(x.power_L2, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<bool>::ser(x.is_dram_, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(PredecBlk &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<Decoder (*)>::des(x.dec, p = ::align<Decoder (*)>(p), reg); p = add<Decoder (*)>(p);
        serdes<bool>::des(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.number_input_addr_bits, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.C_ld_predec_blk_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.R_wire_predec_blk_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.branch_effort_nand2_gate_output, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.branch_effort_nand3_gate_output, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.flag_two_unique_paths, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.flag_L2_gate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_inputs_L1_gate, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_gates_L1_nand2_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_gates_L1_nand3_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.number_gates_L2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.min_number_gates_L1, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.min_number_gates_L2, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_L1_active_nand2_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_L1_active_nand3_path, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double ([20])>::des(x.w_L1_nand2_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::des(x.w_L1_nand2_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::des(x.w_L1_nand3_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::des(x.w_L1_nand3_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::des(x.w_L2_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::des(x.w_L2_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double>::des(x.delay_nand2_path, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.delay_nand3_path, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<powerDef>::des(x.power_nand2_path, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_nand3_path, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<powerDef>::des(x.power_L2, p = ::align<powerDef>(p), reg); p = add<powerDef>(p);
        serdes<bool>::des(x.is_dram_, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

/*
location: cacti/decoder.h:45|7
parents: cacti/decoder.h
*/
template<>
struct serdes<Decoder> {
    static constexpr size_t size = alignadd<bool>(alignadd<int>(alignadd<std::remove_reference<const Area (&)>::type *>(alignadd<Sleep_tx (*)>(alignadd<double>(alignadd<double>(alignadd<bool>(alignadd<bool>(alignadd<bool>(alignadd<double>(alignadd<double ([20])>(alignadd<double ([20])>(alignadd<int>(alignadd<int>(alignadd<double>(alignadd<double>(alignadd<int>(alignadd<bool>(alignadd<Component>(0)))))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<bool>::align), serdes<int>::align), serdes<double>::align), serdes<double>::align), serdes<int>::align), serdes<int>::align), serdes<double ([20])>::align), serdes<double ([20])>::align), serdes<double>::align), serdes<bool>::align), serdes<bool>::align), serdes<bool>::align), serdes<double>::align), serdes<double>::align), serdes<Sleep_tx (*)>::align), serdes<std::remove_reference<const Area (&)>::type *>::align), serdes<int>::align), serdes<bool>::align);

    static void ser(const Decoder &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<bool>::ser(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::ser(x.num_in_signals, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::ser(x.C_ld_dec_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.R_wire_dec_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::ser(x.num_gates, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::ser(x.num_gates_min, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double ([20])>::ser(x.w_dec_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::ser(x.w_dec_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double>::ser(x.delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::ser(x.fully_assoc, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.is_dram, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::ser(x.is_wl_tr, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::ser(x.total_driver_nwidth, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.total_driver_pwidth, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<Sleep_tx (*)>::ser(x.sleeptx, p = ::align<Sleep_tx (*)>(p), reg); p = add<Sleep_tx (*)>(p);
        serdes<std::remove_reference<const Area (&)>::type *>::ser(*(std::remove_reference<const Area (&)>::type **) ((uint8_t *) &x + offsetof(Decoder, cell)), p = ::align<std::remove_reference<const Area (&)>::type *>(p), reg); p = add<std::remove_reference<const Area (&)>::type *>(p);
        serdes<int>::ser(x.nodes_DSTN, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::ser(x.power_gating, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
    static void des(Decoder &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<bool>::des(x.exist, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<int>::des(x.num_in_signals, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double>::des(x.C_ld_dec_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.R_wire_dec_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<int>::des(x.num_gates, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<int>::des(x.num_gates_min, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<double ([20])>::des(x.w_dec_n, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double ([20])>::des(x.w_dec_p, p = ::align<double ([20])>(p), reg); p = add<double ([20])>(p);
        serdes<double>::des(x.delay, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<bool>::des(x.fully_assoc, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.is_dram, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<bool>::des(x.is_wl_tr, p = ::align<bool>(p), reg); p = add<bool>(p);
        serdes<double>::des(x.total_driver_nwidth, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.total_driver_pwidth, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<Sleep_tx (*)>::des(x.sleeptx, p = ::align<Sleep_tx (*)>(p), reg); p = add<Sleep_tx (*)>(p);
        serdes<std::remove_reference<const Area (&)>::type *>::des(*(std::remove_reference<const Area (&)>::type **) ((uint8_t *) &x + offsetof(Decoder, cell)), p = ::align<std::remove_reference<const Area (&)>::type *>(p), reg); p = add<std::remove_reference<const Area (&)>::type *>(p);
        serdes<int>::des(x.nodes_DSTN, p = ::align<int>(p), reg); p = add<int>(p);
        serdes<bool>::des(x.power_gating, p = ::align<bool>(p), reg); p = add<bool>(p);
    }
};

namespace {
template<class Token, double (Crossbar::*Member)>
struct hack_Accessor_18 {
    friend constexpr double (Crossbar::*hack_Access_18(Token *)) {
        return Member;
    }
};
struct hack_Token_18 {
    friend constexpr double (Crossbar::*hack_Access_18(hack_Token_18*));
};
template struct hack_Accessor_18<
    hack_Token_18, &Crossbar::CB_ADJ
>;
}


namespace {
template<class Token, TechnologyParameter::DeviceType (*(Crossbar::*Member))>
struct hack_Accessor_19 {
    friend constexpr TechnologyParameter::DeviceType (*(Crossbar::*hack_Access_19(Token *))) {
        return Member;
    }
};
struct hack_Token_19 {
    friend constexpr TechnologyParameter::DeviceType (*(Crossbar::*hack_Access_19(hack_Token_19*)));
};
template struct hack_Accessor_19<
    hack_Token_19, &Crossbar::deviceType
>;
}


namespace {
template<class Token, double (Crossbar::*Member)>
struct hack_Accessor_20 {
    friend constexpr double (Crossbar::*hack_Access_20(Token *)) {
        return Member;
    }
};
struct hack_Token_20 {
    friend constexpr double (Crossbar::*hack_Access_20(hack_Token_20*));
};
template struct hack_Accessor_20<
    hack_Token_20, &Crossbar::TriS1
>;
}


namespace {
template<class Token, double (Crossbar::*Member)>
struct hack_Accessor_21 {
    friend constexpr double (Crossbar::*hack_Access_21(Token *)) {
        return Member;
    }
};
struct hack_Token_21 {
    friend constexpr double (Crossbar::*hack_Access_21(hack_Token_21*));
};
template struct hack_Accessor_21<
    hack_Token_21, &Crossbar::TriS2
>;
}


namespace {
template<class Token, double (Crossbar::*Member)>
struct hack_Accessor_22 {
    friend constexpr double (Crossbar::*hack_Access_22(Token *)) {
        return Member;
    }
};
struct hack_Token_22 {
    friend constexpr double (Crossbar::*hack_Access_22(hack_Token_22*));
};
template struct hack_Accessor_22<
    hack_Token_22, &Crossbar::min_w_pmos
>;
}


namespace {
template<class Token, double (Crossbar::*Member)>
struct hack_Accessor_23 {
    friend constexpr double (Crossbar::*hack_Access_23(Token *)) {
        return Member;
    }
};
struct hack_Token_23 {
    friend constexpr double (Crossbar::*hack_Access_23(hack_Token_23*));
};
template struct hack_Accessor_23<
    hack_Token_23, &Crossbar::Vdd
>;
}


/*
location: cacti/crossbar.h:45|7
parents: cacti/crossbar.h
*/
template<>
struct serdes<Crossbar> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<TechnologyParameter::DeviceType (*)>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<Component>(0))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<TechnologyParameter::DeviceType (*)>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const Crossbar &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<double>::ser(x.n_inp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.n_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.flit_size, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.tri_inp_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.tri_out_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.tri_ctr_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.tri_int_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_18(static_cast<hack_Token_18 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<TechnologyParameter::DeviceType (*)>::ser(x.*hack_Access_19(static_cast<hack_Token_19 *>(nullptr)), p = ::align<TechnologyParameter::DeviceType (*)>(p), reg); p = add<TechnologyParameter::DeviceType (*)>(p);
        serdes<double>::ser(x.*hack_Access_20(static_cast<hack_Token_20 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_21(static_cast<hack_Token_21 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_22(static_cast<hack_Token_22 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_23(static_cast<hack_Token_23 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(Crossbar &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<double>::des(x.n_inp, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.n_out, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.flit_size, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.tri_inp_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.tri_out_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.tri_ctr_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.tri_int_cap, p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_18(static_cast<hack_Token_18 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<TechnologyParameter::DeviceType (*)>::des(x.*hack_Access_19(static_cast<hack_Token_19 *>(nullptr)), p = ::align<TechnologyParameter::DeviceType (*)>(p), reg); p = add<TechnologyParameter::DeviceType (*)>(p);
        serdes<double>::des(x.*hack_Access_20(static_cast<hack_Token_20 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_21(static_cast<hack_Token_21 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_22(static_cast<hack_Token_22 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_23(static_cast<hack_Token_23 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
    }
};

namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_1 {
    friend constexpr double (Arbiter::*hack_Access_1(Token *)) {
        return Member;
    }
};
struct hack_Token_1 {
    friend constexpr double (Arbiter::*hack_Access_1(hack_Token_1*));
};
template struct hack_Accessor_1<
    hack_Token_1, &Arbiter::NTn1
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_2 {
    friend constexpr double (Arbiter::*hack_Access_2(Token *)) {
        return Member;
    }
};
struct hack_Token_2 {
    friend constexpr double (Arbiter::*hack_Access_2(hack_Token_2*));
};
template struct hack_Accessor_2<
    hack_Token_2, &Arbiter::PTn1
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_3 {
    friend constexpr double (Arbiter::*hack_Access_3(Token *)) {
        return Member;
    }
};
struct hack_Token_3 {
    friend constexpr double (Arbiter::*hack_Access_3(hack_Token_3*));
};
template struct hack_Accessor_3<
    hack_Token_3, &Arbiter::NTn2
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_4 {
    friend constexpr double (Arbiter::*hack_Access_4(Token *)) {
        return Member;
    }
};
struct hack_Token_4 {
    friend constexpr double (Arbiter::*hack_Access_4(hack_Token_4*));
};
template struct hack_Accessor_4<
    hack_Token_4, &Arbiter::PTn2
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_5 {
    friend constexpr double (Arbiter::*hack_Access_5(Token *)) {
        return Member;
    }
};
struct hack_Token_5 {
    friend constexpr double (Arbiter::*hack_Access_5(hack_Token_5*));
};
template struct hack_Accessor_5<
    hack_Token_5, &Arbiter::R
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_6 {
    friend constexpr double (Arbiter::*hack_Access_6(Token *)) {
        return Member;
    }
};
struct hack_Token_6 {
    friend constexpr double (Arbiter::*hack_Access_6(hack_Token_6*));
};
template struct hack_Accessor_6<
    hack_Token_6, &Arbiter::PTi
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_7 {
    friend constexpr double (Arbiter::*hack_Access_7(Token *)) {
        return Member;
    }
};
struct hack_Token_7 {
    friend constexpr double (Arbiter::*hack_Access_7(hack_Token_7*));
};
template struct hack_Accessor_7<
    hack_Token_7, &Arbiter::NTi
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_8 {
    friend constexpr double (Arbiter::*hack_Access_8(Token *)) {
        return Member;
    }
};
struct hack_Token_8 {
    friend constexpr double (Arbiter::*hack_Access_8(hack_Token_8*));
};
template struct hack_Accessor_8<
    hack_Token_8, &Arbiter::flit_size
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_9 {
    friend constexpr double (Arbiter::*hack_Access_9(Token *)) {
        return Member;
    }
};
struct hack_Token_9 {
    friend constexpr double (Arbiter::*hack_Access_9(hack_Token_9*));
};
template struct hack_Accessor_9<
    hack_Token_9, &Arbiter::NTtr
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_10 {
    friend constexpr double (Arbiter::*hack_Access_10(Token *)) {
        return Member;
    }
};
struct hack_Token_10 {
    friend constexpr double (Arbiter::*hack_Access_10(hack_Token_10*));
};
template struct hack_Accessor_10<
    hack_Token_10, &Arbiter::PTtr
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_11 {
    friend constexpr double (Arbiter::*hack_Access_11(Token *)) {
        return Member;
    }
};
struct hack_Token_11 {
    friend constexpr double (Arbiter::*hack_Access_11(hack_Token_11*));
};
template struct hack_Accessor_11<
    hack_Token_11, &Arbiter::o_len
>;
}


namespace {
template<class Token, TechnologyParameter::DeviceType (*(Arbiter::*Member))>
struct hack_Accessor_12 {
    friend constexpr TechnologyParameter::DeviceType (*(Arbiter::*hack_Access_12(Token *))) {
        return Member;
    }
};
struct hack_Token_12 {
    friend constexpr TechnologyParameter::DeviceType (*(Arbiter::*hack_Access_12(hack_Token_12*)));
};
template struct hack_Accessor_12<
    hack_Token_12, &Arbiter::deviceType
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_13 {
    friend constexpr double (Arbiter::*hack_Access_13(Token *)) {
        return Member;
    }
};
struct hack_Token_13 {
    friend constexpr double (Arbiter::*hack_Access_13(hack_Token_13*));
};
template struct hack_Accessor_13<
    hack_Token_13, &Arbiter::TriS1
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_14 {
    friend constexpr double (Arbiter::*hack_Access_14(Token *)) {
        return Member;
    }
};
struct hack_Token_14 {
    friend constexpr double (Arbiter::*hack_Access_14(hack_Token_14*));
};
template struct hack_Accessor_14<
    hack_Token_14, &Arbiter::TriS2
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_15 {
    friend constexpr double (Arbiter::*hack_Access_15(Token *)) {
        return Member;
    }
};
struct hack_Token_15 {
    friend constexpr double (Arbiter::*hack_Access_15(hack_Token_15*));
};
template struct hack_Accessor_15<
    hack_Token_15, &Arbiter::min_w_pmos
>;
}


namespace {
template<class Token, double (Arbiter::*Member)>
struct hack_Accessor_16 {
    friend constexpr double (Arbiter::*hack_Access_16(Token *)) {
        return Member;
    }
};
struct hack_Token_16 {
    friend constexpr double (Arbiter::*hack_Access_16(hack_Token_16*));
};
template struct hack_Accessor_16<
    hack_Token_16, &Arbiter::Vdd
>;
}


/*
location: cacti/arbiter.h:44|7
parents: cacti/arbiter.h
*/
template<>
struct serdes<Arbiter> {
    static constexpr size_t size = alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<TechnologyParameter::DeviceType (*)>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<double>(alignadd<Component>(0)))))))))))))))));
    static constexpr size_t align = std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max(std::max((size_t) 1, serdes<Component>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<TechnologyParameter::DeviceType (*)>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align), serdes<double>::align);

    static void ser(const Arbiter &x, size_t p, ser_reg &reg) {
        serdes<Component>::ser(*static_cast<const Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<double>::ser(x.*hack_Access_1(static_cast<hack_Token_1 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_2(static_cast<hack_Token_2 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_3(static_cast<hack_Token_3 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_4(static_cast<hack_Token_4 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_5(static_cast<hack_Token_5 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_6(static_cast<hack_Token_6 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_7(static_cast<hack_Token_7 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_8(static_cast<hack_Token_8 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_9(static_cast<hack_Token_9 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_10(static_cast<hack_Token_10 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_11(static_cast<hack_Token_11 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<TechnologyParameter::DeviceType (*)>::ser(x.*hack_Access_12(static_cast<hack_Token_12 *>(nullptr)), p = ::align<TechnologyParameter::DeviceType (*)>(p), reg); p = add<TechnologyParameter::DeviceType (*)>(p);
        serdes<double>::ser(x.*hack_Access_13(static_cast<hack_Token_13 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_14(static_cast<hack_Token_14 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_15(static_cast<hack_Token_15 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::ser(x.*hack_Access_16(static_cast<hack_Token_16 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
    }
    static void des(Arbiter &x, const uint8_t *p, des_reg &reg) {
        serdes<Component>::des(*static_cast<Component *>(&x), p = ::align<Component>(p), reg); p = add<Component>(p);
        serdes<double>::des(x.*hack_Access_1(static_cast<hack_Token_1 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_2(static_cast<hack_Token_2 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_3(static_cast<hack_Token_3 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_4(static_cast<hack_Token_4 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_5(static_cast<hack_Token_5 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_6(static_cast<hack_Token_6 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_7(static_cast<hack_Token_7 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_8(static_cast<hack_Token_8 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_9(static_cast<hack_Token_9 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_10(static_cast<hack_Token_10 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_11(static_cast<hack_Token_11 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<TechnologyParameter::DeviceType (*)>::des(x.*hack_Access_12(static_cast<hack_Token_12 *>(nullptr)), p = ::align<TechnologyParameter::DeviceType (*)>(p), reg); p = add<TechnologyParameter::DeviceType (*)>(p);
        serdes<double>::des(x.*hack_Access_13(static_cast<hack_Token_13 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_14(static_cast<hack_Token_14 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_15(static_cast<hack_Token_15 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
        serdes<double>::des(x.*hack_Access_16(static_cast<hack_Token_16 *>(nullptr)), p = ::align<double>(p), reg); p = add<double>(p);
    }
};

#else

template<> struct serdes<Arbiter>;
template<> struct serdes<Area>;
template<> struct serdes<powerComponents>;
template<> struct serdes<powerDef>;
template<> struct serdes<InputParameter>;
template<> struct serdes<results_mem_array>;
template<> struct serdes<uca_org_t>;
template<> struct serdes<mem_array>;
template<> struct serdes<Component>;
template<> struct serdes<Crossbar>;
template<> struct serdes<Decoder>;
template<> struct serdes<PredecBlk>;
template<> struct serdes<PredecBlkDrv>;
template<> struct serdes<Predec>;
template<> struct serdes<Driver>;
template<> struct serdes<Htree2>;
template<> struct serdes<TechnologyParameter>;
template<> struct serdes<TechnologyParameter::DeviceType>;
template<> struct serdes<TechnologyParameter::InterconnectType>;
template<> struct serdes<TechnologyParameter::MemoryType>;
template<> struct serdes<TechnologyParameter::ScalingFactor>;
template<> struct serdes<DynamicParameter>;
template<> struct serdes<Sleep_tx>;
template<> struct serdes<Router>;
template<> struct serdes<Subarray>;
template<> struct serdes<min_values_t>;
template<> struct serdes<array_inputs>;
template<> struct serdes<ArrayST>;
template<> struct serdes<InstCache>;
template<> struct serdes<DataCache>;
template<> struct serdes<statsComponents>;
template<> struct serdes<statsDef>;
template<> struct serdes<CoreDynParam>;
template<> struct serdes<CacheDynParam>;
template<> struct serdes<MCParam>;
template<> struct serdes<NoCParam>;
template<> struct serdes<ProcParam>;
template<> struct serdes<NIUParam>;
template<> struct serdes<PCIeParam>;
template<> struct serdes<BranchPredictor>;
template<> struct serdes<InstFetchU>;
template<> struct serdes<SchedulerU>;
template<> struct serdes<RENAMINGU>;
template<> struct serdes<LoadStoreU>;
template<> struct serdes<MemManU>;
template<> struct serdes<RegFU>;
template<> struct serdes<EXECU>;
template<> struct serdes<Core>;
template<> struct serdes<interconnect>;
template<> struct serdes<NIUController>;
template<> struct serdes<PCIeController>;
template<> struct serdes<FlashController>;
template<> struct serdes<selection_logic>;
template<> struct serdes<dep_resource_conflict_check>;
template<> struct serdes<inst_decoder>;
template<> struct serdes<DFFCell>;
template<> struct serdes<Pipeline>;
template<> struct serdes<FunctionalUnit>;
template<> struct serdes<UndiffCore>;
template<> struct serdes<MCBackend>;
template<> struct serdes<MCPHY>;
template<> struct serdes<MCFrontEnd>;
template<> struct serdes<MemoryController>;
template<> struct serdes<NoC>;
template<> struct serdes<Processor>;
template<> struct serdes<SharedCache>;
template<> struct serdes<CCdir>;
template<> struct serdes<predictor_systemcore>;
template<> struct serdes<itlb_systemcore>;
template<> struct serdes<icache_systemcore>;
template<> struct serdes<dtlb_systemcore>;
template<> struct serdes<dcache_systemcore>;
template<> struct serdes<BTB_systemcore>;
template<> struct serdes<system_core>;
template<> struct serdes<system_L1Directory>;
template<> struct serdes<system_L2Directory>;
template<> struct serdes<system_L2>;
template<> struct serdes<system_L3>;
template<> struct serdes<xbar0_systemNoC>;
template<> struct serdes<system_NoC>;
template<> struct serdes<system_mem>;
template<> struct serdes<system_mc>;
template<> struct serdes<system_niu>;
template<> struct serdes<system_pcie>;
template<> struct serdes<root_system>;
template<> struct serdes<ParseXML>;

#endif

