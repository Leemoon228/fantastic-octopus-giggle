all: main
main: compileDyn compileStat main.c loadlib.dll 
	gcc -c -fPIC main.c
	gcc -o main.exe main.o -L./ -lloadlib

compileDyn: arrayLib.c matrixLib.c libArrayMatrix.h
	gcc -c  arrayLib.c matrixLib.c
	gcc -shared -o matrixLib.dll matrixLib.o
	gcc -shared -o arrayLib.dll arrayLib.o

compileStat: loadlib.c loadlib.h
	gcc -c -fPIC loadlib.c
	gcc -shared -o loadlib.dll loadlib.o

clean:
	rm *.dll *.o *.exe
