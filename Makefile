#Author: Jonathan Finlay
#Date: 9/10/17
#Bugs: N/A
#Description: build the program below, remove .o files and debug.


CC=g++
CFLAGS= -std=c++11 -pthread
FILES= barrier.cpp Semaphore.cpp
OUT_EXE=barrier

build: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) $(CFLAGS)
clean:
	rm *.o
debug:
	$(CC) -g $(FILES) -o $(OUT_EXE) $(CFLAGS)
	gdb barrier
