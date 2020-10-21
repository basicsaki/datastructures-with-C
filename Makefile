default: $(shell find c -name '*.c') ./*.c
	gcc $^ -o main

clean:
	rm -r main
