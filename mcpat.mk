TARGET = mcpat
SHELL = /bin/sh
.PHONY: all depend clean
.SUFFIXES: .cc .o

ifndef NTHREADS
  NTHREADS = 16
endif


LIBS = 
INCS = -lm

ifeq ($(TAG),dbg)
  DBG =
  OPT = -g -O0 -DNTHREADS=1 -Icacti
else
  DBG = 
  # OPT = -O3 -msse2 -mfpmath=sse -DNTHREADS=$(NTHREADS) -Icacti
  OPT = -O3 -march=native -mtune=native -DNTHREADS=$(NTHREADS) -Icacti
  #OPT = -O0 -DNTHREADS=$(NTHREADS)
endif

#CXXFLAGS = -Wall -Wno-unknown-pragmas -Winline $(DBG) $(OPT) 
CXXFLAGS += -Wno-unknown-pragmas $(DBG) $(OPT) 
CXX = g++ -std=c++17
CC  = gcc

VPATH = cacti

SRCS  = \
  Ucache.cc \
  XML_Parse.cc \
  arbiter.cc \
  area.cc \
  array.cc \
  bank.cc \
  basic_circuit.cc \
  basic_components.cc \
  cacti_interface.cc \
  component.cc \
  core.cc \
  crossbar.cc \
  decoder.cc \
  htree2.cc \
  interconnect.cc \
  io.cc \
  iocontrollers.cc \
  logic.cc \
  main.cc \
  mat.cc \
  memoryctrl.cc \
  noc.cc \
  nuca.cc \
  parameter.cc \
  processor.cc \
  router.cc \
  sharedcache.cc \
  subarray.cc \
  technology.cc \
  uca.cc \
  wire.cc \
  xmlParser.cc \
  powergating.cc

OBJS = $(patsubst %.cc,obj_$(TAG)/%.o,$(SRCS))

all: obj_$(TAG)/$(TARGET)
	cp -f obj_$(TAG)/$(TARGET) $(TARGET)

obj_$(TAG)/$(TARGET) : $(OBJS)
	$(CXX) $(OBJS) -o $@ $(INCS) $(CXXFLAGS) $(LIBS) -pthread

#obj_$(TAG)/%.o : %.cc
#	$(CXX) -c $(CXXFLAGS) $(INCS) -o $@ $<

obj_$(TAG)/%.o : %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	-rm -f *.o $(TARGET)

obj_$(TAG)/serialize.o : serialize.gen.cpp.inc

serialize.gen.cpp.inc : gen_ser.py
	python3 $<

win_manifest.res : win_manifest.rc win_manifest.xml
	windres --input $< --output $@ --output-format=coff

multi : obj_$(TAG)/multi.o obj_$(TAG)/serialize.o $(filter-out obj_$(TAG)/main.o,$(OBJS))
	$(CXX) $^ -o $@ $(INCS) $(CXXFLAGS) $(LIBS) -pthread

ifeq ($(OS),Windows_NT)
    multi : win_manifest.res
endif
