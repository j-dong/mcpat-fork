class Processor;

void serialize(const Processor &p, const char *fn);
Processor *deserialize(const char *fn);
