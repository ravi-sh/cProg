sll.out: main.o add_begin.o printdata.o add_end.o findLoop.o add_middle.o countNodes.o
	gcc main.c add_begin.c printdata.c add_end.c findLoop.c add_middle.c countNodes.c -o sll.out

main.o: main.c sll.h
	gcc -c main.c -o main.o

add_begin.o: add_begin.c sll.h
	gcc -c add_begin.c -o add_begin.o

add_end.o: add_end.c sll.h
	gcc -c add_end.c -o add_end.o

printdata.o: printdata.c sll.h
	gcc -c printdata.c -o printdata.o

findLoop.o: findLoop.c sll.h
	gcc -c findLoop.c -o findLoop.o

countNodes.o: countNodes.c sll.h
	gcc -c countNodes.c -o countNodes.o

add_middle.o: add_middle.c sll.h
	gcc -c add_middle.c -o add_middle.o

clean:
	rm *.o sll.out
