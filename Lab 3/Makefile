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
