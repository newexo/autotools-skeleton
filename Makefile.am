AM_CXXFLAGS = -g -pedantic -Wall -std=c++11 -Iinclude -Isrc
AM_LDFLAGS =

all: libhello.a hello testhello test

lib_LIBRARIES = libhello.a
libhello_a_SOURCES = include/hello.h src/libhello.cpp

bin_PROGRAMS = hello testhello
hello_SOURCES = $(libhello_a_SOURCES) src/hello.cpp
testhello_SOURCES = $(libhello_a_SOURCES) src/tests/testhello.cpp

ACLOCAL_AMFLAGS = -I m4 --install
EXTRA_DIST = m4/NOTES

test: testhello
	./testhello
