make:compileAll
	./exe
	
compileAll : readRecords.o insertionSort.o measureTime.o driver.o 
	gcc readRecords.o insertionSort.o measureTime.o driver.o -o exe

readRecords.o : readRecords.c readRecords.h
	gcc -c readRecords.c

insertionSort.o : insertionSort.c insertionSort.h 
	gcc -c insertionSort.c

measureTime.o : measureTime.c insertionSort.h 
	gcc -c measureTime.c 
	
driver.o : driver.c readRecords.h insertionSort.h
	gcc -c driver.c


