


output: stackDemo.o stackLinkedList.o
				gcc stackDemo.o stackLinkedList.o -o output

stackDemo.o: stackDemo.c stackLinkedList.h
						 gcc -c stackDemo.c -o stackDemo.o

stackLinkedList.o: stackLinkedList.c stackLinkedList.h
									 gcc -c stackLinkedList.c -o stackLinkedList.o

clean:
			rm -rf *.o 
			rm output
