#	Author: John Gibbons
#	Date: 2016.10.26
#	Edited by Quinten Batterman

prog: main.o Test.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o Test.o  -o prog

main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp

Test.o: Test.cpp Test.h
	g++ -std=c++11 -g -Wall -c Test.cpp


#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog
