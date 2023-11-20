LD = g++
LDLAGS = 
CC = g++
CCFLAGS = -Wall -Wextra -std=c++11 -g
.PHONY: clean

trajets: Catalog.o CompositeJourney.o SimpleJourney.o Journey.o Journeys.o
	$(LD) $(LDFLAGS) -o trajets $^


%.o: %.cpp %.h
	$(CC) $(CCFLAGS) -c $<.cpp

Journeys.o: Journey.h
CompositeJourney.o: Journey.h
SimpleJourney.o: Journey.h
Catalog.o: Journeys.h

clean:
	rm -f *.o trajets

