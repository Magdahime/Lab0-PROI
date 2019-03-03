#Makefile file to compile the simple restaurant project.
CFLAGS:= -Wall

RESTAURANT: main.o Thungry_client.o Tcook.o
	g++ $(CFLAGS) main.o Thungry_client.o Tcook.o

main.o: main.cpp Thungry_client.h Tcook.h main.h
	g++ $(CFLAGS) -c main.cpp

Thungry_client.o: Thungry_client.cpp Thungry_client.h main.h
	g++ $(CFLAGS) -c Thungry_client.cpp

Tcook.o: Tcook.cpp Tcook.h Thungry_client.h main.h
	g++ $(CFLAGS) -c Tcook.cpp

clean:
	rm -f *.o 
	rm -f RESTAURANT




