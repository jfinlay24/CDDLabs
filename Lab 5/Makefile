#Author: Jonathan Finlay
#Date: 9/10/17
#License Employed: GNU General Public License
#Bugs: N/A
#Description: build the program below, remove .o files, debug and doxyfile.


CC=g++
CFLAGS= -std=c++11 -pthread
FILES= ProCon.cpp Semaphore.cpp
OUT_EXE=ProCon

ALL: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) $(CFLAGS)
CLEAN:
	rm *.o
DEBUG:
	DEBUGFLAGS = -g -O0 -Wall
DEBUG:
	ALL

DOC: 
	doc:ALL
	if [ -e "Doxyfile" ] ; then  rm 'Doxyfile';  fi
	if [ -d "docs" ] ; then  rm -rf 'docs';  fi
	mkdir docs
	echo "PROJECT_NAME = \"$L\"" >> Doxyfile
	echo "PROJECT_BRIEF = \"$B\"" >> Doxyfile
	echo "PROJECT_NUMBER = 5" >> Doxyfile
	echo "OUTPUT_DIRECTORY = ./docs"  >> Doxyfile
	echo "EXTRACT_ALL = YES" >> Doxyfile
	echo "RECURSIVE = YES" >> Doxyfile
	echo "SOURCE_BROWSER = YES" >> Doxyfile
	echo "GENERATE_LATEX = NO" >> Doxyfile
	echo "DOT_IMAGE_FORMAT = svg" >> Doxyfile
	echo "INPUT = ." >> Doxyfile
doxygen Doxyfile
