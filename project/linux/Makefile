rootdir := $(shell pwd)/../../..
project := ubuntu-base

include $(rootdir)/build/common/inc.mk
ifeq ($(hostmaketype), windows)
rootdir := ../../..
endif

TARGETSPEC = libonbus
TARGET_LIB = libonbus.$(staticlibsuffix)

DEP_ARCHIVES = liboncore libonhttpd

MODULE = libonbus
MODULEVERSION = 0.0.1

include ../source.mk
include $(rootdir)/build/utils/merged-archive.$(hostmaketype).mk
