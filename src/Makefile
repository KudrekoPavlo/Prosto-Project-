projet: mainTest.o Pixel.o
	g++ mainTest.o Pixel.o -o projet

test.o: mainTest.cpp Pixel.h
	g++ -Wall -c mainTest.cpp

Pixel.o: Pixel.cpp Pixel.h
	g++ -Wall -c Pixel.cpp

clean:
	rm -f *.o projet
