# McPAT serialization fork

This fork of McPAT is based on version 1.3, which is the latest version
at time of writing (and judging from the release history, is likely
to continue for a while). It adds two main features: serialization and
runtime manipulation of statistics. This allows for integration with
a performance simulator by skipping the initialization phase when the
model parameters are unchanged.

**The original README is available at [README.mcpat](README.mcpat).**

Note: only the core, cache, and memory systems have been tested.
It is likely that other components will produce invalid results.

Note: a function in Cacti, `Sleep_tx::compute_penalty()`,
has been patched to fix a memory error (?)
causing slow execution (infinite loop?) on some machines.
This might cause invalid results.

## How to use

The Makefiles have been modified to build an additional program,
`multi`, which is used to access the added functionality.
You can run `make multi` to build it.

### Serializing initial state

First, once you have your XML file (here `test.xml`) for McPAT,
run the following command to serialize the program state
prior to computation:

    ./multi test.xml ser

This produces a file `saved_proc.bin` containing the results of
initialization which can be loaded in future runs.

### Runtime manipulation

When you want to compute the power for another set of statistics,
put those into a file with the same format as `dynamic_test`.
For example, to compute power using the statistics in `dynamic_test`:

    ./multi test.xml dynamic_test

(The first argument is not used.)

### Licensing

All original McPAT code is licensed under the
"McPAT Software License Agreement" as found in the headers of most
files.

All modifications are licensed under the MIT license, attached below:

    Copyright 2022 James Dong

    Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
