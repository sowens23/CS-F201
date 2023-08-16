run: part_c
	./part_c

part_c: part_c.o Author.o Author.h Book.o Book.h
	g++ -std=c++17 -o part_c part_c.o Author.o Book.o

part_c.o: part_c.cpp Author.h Book.h
	g++ -std=c++17 -c part_c.cpp

Author.o: Author.cpp Author.h
	g++ -std=c++17 -c Author.cpp

Book.o: Book.cpp Book.h
	g++ -std=c++17 -c Book.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_c
	
.PHONY: clean cleanest run
