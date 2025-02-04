projet: test.o Pixel.o
	g++ test.o Pixel.o -o projet

test.o: test.cpp Pixel.h
	g++ -Wall -c test.cpp

Pixel.o: Pixel.cpp Pixel.h
	g++ -Wall -c Pixel.cpp

clean:
	rm -f *.o projet