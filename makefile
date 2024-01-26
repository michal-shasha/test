CC=gcc
AR=ar
OBJECTS_MAIN=main.o

OBJECTS_REC = basicClassification.o advancedClassificationRecursion.o
OBJECTS_Loop = basicClassification.o advancedClassificationLoop.o

all: loops recursives recursived loopd mains maindloop maindrec

loops: libclassloops.a


libclassloops.a: $(OBJECTS_Loop)
	$(AR) -rcs libclassloops.a $(OBJECTS_Loop)

recursives: libclassrec.a
libclassrec.a: $(OBJECTS_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_REC)

recursived: libclassrec.so
libclassrec.so: $(OBJECTS_REC)
	$(CC) -shared -o libclassrec.so $(OBJECTS_REC)

loopd: libclassloops.so
libclassloops.so: $(OBJECTS_Loop)	
	$(CC) -shared -o libclassloops.so $(OBJECTS_Loop)

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a

maindloop: $(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so

maindrec: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so

advancedClassificationLoop.o:advancedClassificationLoop.c  NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o:advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
