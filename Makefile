default: $(shell find c -name '*.c') ./*.c $(shell find algorithms -name '*.c')
	# i686-w64-mingw32-gcc $^ -o main32.exe
	# x86_64-w64-mingw32-gcc $^ -o main64.exe
	gcc $^ -o main -lncurses
clean:
	rm -r main main32.exe main32.exe

