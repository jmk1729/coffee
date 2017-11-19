#SUFFIXES = .c .h .y .l

bin_PROGRAMS = coffee
coffee_SOURCES = CLImain.c CommandLineInterface/CLIcore.c CommandLineInterface/CLIcore.h CommandLineInterface/calc_bison.y CommandLineInterface/calc_flex.l CommandLineInterface/calc.h
coffee_CPPFLAGS = -I@abs_top_srcdir@/src -DCONFIGDIR=\"@abs_top_srcdir@/config\" -DSOURCEDIR=\"@abs_top_srcdir@/src\" -DABSSRCTOPDIR=\"@abs_top_srcdir@\" -fopenmp -ldl

ACLOCAL_AMFLAGS = -I m4

## For Bison and FLEX
AM_YFLAGS = -d
AM_LFLAGS = -i 

## The contents of this variable are passed to every compilation that invokes the C preprocessor IF target_CPPFLAGS does not exit; it is a list of arguments to the preprocessor. For instance, -I and -D options should be listed here.
## AM_CPPFLAGS = -DCONFIGDIR=\"@abs_top_srcdir@/config\"

noinst_HEADERS = CommandLineInterface/calc.h

BUILT_SOURCES = CommandLineInterface/calc_bison.h


SUBDIRS = 
coffee_LDADD = 


## Modules are built as libraries of convenience
## Linking order matters


## 
## coffee modules
##

SUBDIRS += PIAACMCsimul
coffee_LDADD += PIAACMCsimul/libpiaacmcsimul.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/PIAACMCsimul

SUBDIRS += coronagraphs
coffee_LDADD += coronagraphs/libcoronagraphs.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/coronagraphs

SUBDIRS += AOsystSim
coffee_LDADD += AOsystSim/libaosystsim.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/AOsystSim

SUBDIRS += OptSystProp
coffee_LDADD += OptSystProp/liboptsystprop.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/OptSystProp

SUBDIRS += OpticsMaterials
coffee_LDADD += OpticsMaterials/libopticsmaterials.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/OpticsMaterials

SUBDIRS += WFpropagate
coffee_LDADD += WFpropagate/libwfpropagate.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/WFpropagate



## 
## Core modules last, higher level modules at the top
## 

SUBDIRS += cudacomp
coffee_LDADD += cudacomp/libcudacomp.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/cudacomp

SUBDIRS += psf
coffee_LDADD += psf/libpsf.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/psf

SUBDIRS += img_reduce
coffee_LDADD += img_reduce/libimgreduce.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/img_reduce

SUBDIRS += image_format
coffee_LDADD += image_format/libimageformat.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/image_format

SUBDIRS += ZernikePolyn
coffee_LDADD += ZernikePolyn/libzernikepolyn.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/ZernikePolyn

SUBDIRS += image_basic
coffee_LDADD += image_basic/libimagebasic.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/image_basic

SUBDIRS += image_filter
coffee_LDADD += image_filter/libimagefilter.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/image_filter

SUBDIRS += image_gen
coffee_LDADD += image_gen/libimagegen.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/image_gen

SUBDIRS += linopt_imtools
coffee_LDADD += linopt_imtools/liblinoptimtools.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/linopt_imtools

SUBDIRS += statistic
coffee_LDADD += statistic/libstatistic.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/statistic

SUBDIRS += info
coffee_LDADD += info/libinfo.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/info

SUBDIRS += fft
coffee_LDADD += fft/libfft.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/fft



## 
## CORE modules, should always be included
##

SUBDIRS += COREMOD_arith
coffee_LDADD += COREMOD_arith/libcoremodarith.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/COREMOD_arith

SUBDIRS += COREMOD_memory
coffee_LDADD += COREMOD_memory/libcoremodmemory.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/COREMOD_memory

SUBDIRS += COREMOD_iofits
coffee_LDADD += COREMOD_iofits/libcoremodiofits.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/COREMOD_iofits

SUBDIRS += COREMOD_tools
coffee_LDADD += COREMOD_tools/libcoremodtools.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/COREMOD_tools

SUBDIRS += 00CORE
coffee_LDADD += 00CORE/lib00core.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/00CORE

SUBDIRS += ImageStreamIO
coffee_LDADD += ImageStreamIO/libimagestreamio.la
coffee_CPPFLAGS += -I@abs_top_srcdir@/src/ImageStreamIO
