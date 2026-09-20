simple.exe: simple.o libsimple.a
	gcc simple.o -L. -lsimple -o simple.exe

simple.o: simple.c
	gcc -c simple.c

libsimple.a: util.o
	ar rcs libsimple.a util.o

util.o: util.c simple.h
	gcc -c util.c

clean:
	del /Q /F libsimple.a simple.exe simple.o util.o