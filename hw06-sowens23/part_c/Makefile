run: part_c
	./part_c

part_c: part_c.o Date.o Date.h
	g++ -std=c++17 -o part_c part_c.o Date.o

part_c.o: part_c.cpp Date.h
	g++ -std=c++17 -c part_c.cpp

Date.o: Date.cpp Date.h
	g++ -std=c++17 -c Date.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_c
	
.PHONY: clean cleanest run
