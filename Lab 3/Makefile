<<<<<<< HEAD
#Author: Jonathan Finlay
#Date: 9/10/17
#Bugs: N/A
#Description: build the program below, remove .o files and debug.


=======
>>>>>>> 1ede86671bd97d37bdc409f553f1d0e044fb54f8
CC=g++
CFLAGS= -std=c++11 -pthread
FILES= signal.cpp Semaphore.cpp
OUT_EXE=signal

build: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) $(CFLAGS)
clean:
	rm *.o
debug:
	$(CC) -g $(FILES) -o $(OUT_EXE) $(CFLAGS)
	gdb signal
