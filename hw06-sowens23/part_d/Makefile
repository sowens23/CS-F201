run: part_d
	./part_d

part_d: part_d.o Date.o Date.h
	g++ -std=c++17 -o part_d part_d.o Date.o

part_d.o: part_d.cpp Date.h
	g++ -std=c++17 -c part_d.cpp

Date.o: Date.cpp Date.h
	g++ -std=c++17 -c Date.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_d
	
.PHONY: clean cleanest run
