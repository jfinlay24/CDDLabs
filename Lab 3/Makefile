#Author: Jonathan Finlay
#Date: 9/10/17
#Bugs: N/A
#Description: build the program below, remove .o files and debug.

CC=g++
CFLAGS= -std=c++11 -pthread
FILES= mutex.cpp Semaphore.cpp
OUT_EXE=mutex

ALL: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) $(CFLAGS)
CLEAN: 
	rm *.o

DEBUG: 
	DEBUGFLAGS = -g -O0
DEBUG: 
	ALL
	
