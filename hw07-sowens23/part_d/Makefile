run: part_d
	./part_d

part_d: part_d.o Author.o Author.h
	g++ -std=c++17 -o part_d part_d.o Author.o

part_d.o: part_d.cpp Author.h
	g++ -std=c++17 -c part_d.cpp

Author.o: Author.cpp Author.h
	g++ -std=c++17 -c Author.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_d
	
.PHONY: clean cleanest run
