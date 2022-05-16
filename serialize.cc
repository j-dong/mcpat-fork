#include "processor.h"
#include "core.h"
#include "sharedcache.h"
#include "memoryctrl.h"
#include "serialize.h"

void Serializer::ser_inner(const Component &x, data_ptr p) {
    // all primitive
}

void Serializer::ser_inner(const Processor &x, data_ptr p) {
    serat(x.cores, p + offsetof(Processor, cores));
    serat(x.l2array, p + offsetof(Processor, l2array));
    serat(x.l3array, p + offsetof(Processor, l3array));
    serat(x.l1dirarray, p + offsetof(Processor, l1dirarray));
    serat(x.l2dirarray, p + offsetof(Processor, l2dirarray));
    serat(x.nocs, p + offsetof(Processor, nocs));
    serat(x.mc, p + offsetof(Processor, mc));
    serat(x.niu, p + offsetof(Processor, niu));
    serat(x.pcie, p + offsetof(Processor, pcie));
    serat(x.flashcontroller, p + offsetof(Processor, flashcontroller));
}
