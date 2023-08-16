run: part_a
	./part_a

part_a: part_a.o Month.o Month.h Date.o Date.h
	g++ -std=c++17 -o part_a part_a.o Month.o Date.o

part_a.o: part_a.cpp Month.h Date.h
	g++ -std=c++17 -c part_a.cpp

Month.o: Month.cpp Month.h
	g++ -std=c++17 -c Month.cpp

Date.o: Date.cpp Date.h
	g++ -std=c++17 -c Date.cpp

clean:
	rm -f *.o

cleanest: clean
	rm part_b
	
.PHONY: clean cleanest run
