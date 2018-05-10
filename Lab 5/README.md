# CDDLabs for Concurrent and Distributed Devices
# Jonathan Finlay, 4th Year Software Development, IT Carlow
# License employed by GNU General Public License
# Run the make command to generate the executable file
# then ./ProCon
The producer generates random characters from ‘a’ to ‘z’ at random intervals (between 0 and 1 second in length). It adds these to a thread safe buffer that has a finite holding capacity of N characters. It generates a preset number of characters (determined at runtime) and when it has finished it add an ‘X’ character to the buffer and exits. The consumer takes these letters from the buffer at random time intervals (between 0 and 1 second in length) and records how many of each letter it consumes. Once it sees an ‘X’ in the buffer it adds its character count to a central buffer and exits. Files in this Lab

    Semaphore.cpp
    Semaphore.h
    SafeBuffer.cpp
    SafeBuffer.h
    main.cpp
    Doxyfile
    README
    Makefile The main file should demonstrate your producer consumer implementation in action by creating a number of consumers and producers and showing them in action. All files must include suitable documentation. The Makefile must contain a rule (‘doc’) that runs the Doxygen program and generates the documentation.

