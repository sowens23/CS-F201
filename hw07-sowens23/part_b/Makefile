run: part_b
	./part_b

part_b: part_b.o Genre.o Genre.h
	g++ -std=c++17 -o part_b part_b.o Genre.o

part_b.o: part_b.cpp Genre.h
	g++ -std=c++17 -c part_b.cpp

Genre.o: Genre.cpp Genre.h
	g++ -std=c++17 -c Genre.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_b
	
.PHONY: clean cleanest run
