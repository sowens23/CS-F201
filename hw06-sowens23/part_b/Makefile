run: part_b
	./part_b

part_b: part_b.o Month.o Month.h
	g++ -std=c++17 -o part_b part_b.o Month.o

part_b.o: part_b.cpp Month.h
	g++ -std=c++17 -c part_b.cpp

Month.o: Month.cpp Month.h
	g++ -std=c++17 -c Month.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_b
	
.PHONY: clean cleanest run
