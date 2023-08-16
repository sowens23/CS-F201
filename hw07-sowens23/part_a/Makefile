run: part_a
	./part_a

part_a: part_a.o Author.o Author.h Book.o Book.h Genre.o Genre.h
	g++ -std=c++17 -o part_a part_b.o Author.o Book.o Genre.o

part_a.o: part_a.cpp Author.h Book.h Genre.h
	g++ -std=c++17 -c part_a.cpp

Author.o: Author.cpp Author.h
	g++ -std=c++17 -c Author.cpp

Book.o: Book.cpp Book.h
	g++ -std=c++17 -c Book.cpp

Genre.o: Genre.cpp Genre.h
	g++ -std=c++17 -c Genre.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_a
	
.PHONY: clean cleanest run
