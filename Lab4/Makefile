CPPFLAGS= -c -g -Iinc -Wall -pedantic

start: main.o tablica.o
	g++ -Wall -pedantic -o start main.o tablica.o

main.o: main.cpp
	g++ ${CPPFLAGS} -o main.o main.cpp

Tablica.o: tablica.cpp
	g++ ${CPPFLAGS} -o tablica.o tablica.cpp

clean:
	rm -f *.o *~
