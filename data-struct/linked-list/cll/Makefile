cll.out: main.o printNode.o countNodes.o pushNode.o popNode.o
	gcc main.c pushNode.c printNode.c countNodes.c popNode.c -o cll.out

main.o: main.c cll.h
	gcc -c main.c -o main.o

printNode.o: printNode.c cll.h
	gcc -c printNode.c -o printNode.o 

countNodes.o: countNodes.c cll.h
	gcc -c countNodes.c -o countNodes.o

pushNode.o: pushNode.c cll.h
	gcc -c pushNode.c -o pushNode.o

popNode.o: popNode.c cll.h
	gcc -c popNode.c -o popNode.o

clean:
	rm *.o cll.out