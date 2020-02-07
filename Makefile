default: $(shell find c -name '*.c') ./*.c $(shell find algorithms -name '*.c')
	gcc $^ -o main

clean:
	rm -r main
