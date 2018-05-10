#Author: Jonathan Finlay
#Date: 9/10/17
#License Employed: GNU General Public License
#Bugs: N/A
#Description: build the program below, remove .o files and debug.


CC=g++
CFLAGS= -std=c++11 -pthread
FILES= barrier.cpp Semaphore.cpp
OUT_EXE=barrier

ALL: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) $(CFLAGS)
CLEAN:
	rm *.o
DEBUG:
	DEBUGFLAGS = -g -O0 -Wall
DEBUG:
	ALL
