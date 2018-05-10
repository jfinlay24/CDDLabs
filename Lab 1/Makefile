#Author: Jonathan Finlay
#Date: 9/10/17
#Bugs: N/A
#Description: build the program below

CC=g++
CFLAGS= -std=c++11 -pthread
FILES= signal.cpp Semaphore.cpp
OUT_EXE=signal

ALL: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) $(CFLAGS)

CLEAN:
	rm *.o
