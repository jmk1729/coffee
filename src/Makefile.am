#SUFFIXES = .c .h .y .l

bin_PROGRAMS = FALCON
FALCON_SOURCES = CLImain.c CommandLineInterface/CLIcore.c CommandLineInterface/CLIcore.h CommandLineInterface/calc_bison.y CommandLineInterface/calc_flex.l CommandLineInterface/calc.h
FALCON_CPPFLAGS = -I@abs_top_srcdir@/src -DCONFIGDIR=\"@abs_top_srcdir@/config\" -DSOURCEDIR=\"@abs_top_srcdir@/src\" -DABSSRCTOPDIR=\"@abs_top_srcdir@\" -fopenmp -ldl

ACLOCAL_AMFLAGS = -I m4

## For Bison and FLEX
AM_YFLAGS = -d
AM_LFLAGS = -i 

## The contents of this variable are passed to every compilation that invokes the C preprocessor IF target_CPPFLAGS does not exit; it is a list of arguments to the preprocessor. For instance, -I and -D options should be listed here.
## AM_CPPFLAGS = -DCONFIGDIR=\"@abs_top_srcdir@/config\"

noinst_HEADERS = CommandLineInterface/calc.h

BUILT_SOURCES = CommandLineInterface/calc_bison.h


SUBDIRS = 
FALCON_LDADD = 


## Modules are built as libraries of convenience
## Linking order matters

## 
## AO modules
##

SUBDIRS += PIAACMCsimul
FALCON_LDADD += PIAACMCsimul/libpiaacmcsimul.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/PIAACMCsimul

SUBDIRS += coronagraphs
FALCON_LDADD += coronagraphs/libcoronagraphs.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/coronagraphs

SUBDIRS += AOsystSim
FALCON_LDADD += AOsystSim/libaosystsim.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/AOsystSim

SUBDIRS += OptSystProp
FALCON_LDADD += OptSystProp/liboptsystprop.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/OptSystProp


## Core modules last, higher level modules at the top


SUBDIRS += cudacomp
FALCON_LDADD += cudacomp/libcudacomp.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/cudacomp

SUBDIRS += psf
FALCON_LDADD += psf/libpsf.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/psf

SUBDIRS += img_reduce
FALCON_LDADD += img_reduce/libimgreduce.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/img_reduce

SUBDIRS += image_format
FALCON_LDADD += image_format/libimageformat.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/image_format

SUBDIRS += ZernikePolyn
FALCON_LDADD += ZernikePolyn/libzernikepolyn.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/ZernikePolyn

SUBDIRS += image_basic
FALCON_LDADD += image_basic/libimagebasic.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/image_basic

SUBDIRS += image_filter
FALCON_LDADD += image_filter/libimagefilter.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/image_filter

SUBDIRS += image_gen
FALCON_LDADD += image_gen/libimagegen.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/image_gen

SUBDIRS += linopt_imtools
FALCON_LDADD += linopt_imtools/liblinoptimtools.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/linopt_imtools

SUBDIRS += statistic
FALCON_LDADD += statistic/libstatistic.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/statistic

SUBDIRS += info
FALCON_LDADD += info/libinfo.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/info

SUBDIRS += fft
FALCON_LDADD += fft/libfft.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/fft


## 
## CORE modules, should always be included
##



SUBDIRS += COREMOD_arith
FALCON_LDADD += COREMOD_arith/libcoremodarith.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/COREMOD_arith

SUBDIRS += COREMOD_memory
FALCON_LDADD += COREMOD_memory/libcoremodmemory.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/COREMOD_memory

SUBDIRS += COREMOD_iofits
FALCON_LDADD += COREMOD_iofits/libcoremodiofits.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/COREMOD_iofits

SUBDIRS += COREMOD_tools
FALCON_LDADD += COREMOD_tools/libcoremodtools.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/COREMOD_tools

SUBDIRS += 00CORE
FALCON_LDADD += 00CORE/lib00core.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/00CORE

SUBDIRS += ImageStreamIO
FALCON_LDADD += ImageStreamIO/libimagestreamio.la
FALCON_CPPFLAGS += -I@abs_top_srcdir@/src/ImageStreamIO
