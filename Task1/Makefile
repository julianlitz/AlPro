.PHONY: all run

all:

#############################################################
# DON'T change the variable names of INCLUDEDIRS and SOURCE
#############################################################
# A list of include directories
INCLUDEDIRS =
# A list of source files
SOURCE = aufgabe01.c aufgabe02.c aufgabe03.c aufgabe04.c

ifeq ($(origin CC),default)
CC = gcc
endif

WFLAGS = -Wall -Wextra -Wpedantic -g


aufgabe01: aufgabe01.c FORCE
	$(CC) $(INCLUDEDIRS:%=-I%) $< -o $@.out -std=c11 -O0 $(WFLAGS)

aufgabe02: aufgabe02.c FORCE
	$(CC) $(INCLUDEDIRS:%=-I%) $< -o $@.out -std=c11 -O0 $(WFLAGS)

aufgabe03: aufgabe03.c FORCE
	$(CC) $(INCLUDEDIRS:%=-I%) $< -o $@.out -std=c11 -O0 $(WFLAGS)

aufgabe04: aufgabe04.c FORCE
	$(CC) $(INCLUDEDIRS:%=-I%) $< -o $@.out -std=c11 -O0 $(WFLAGS)


# Make sure we always rebuild
# Required for the tester
FORCE: ;
