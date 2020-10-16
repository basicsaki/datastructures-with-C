default: main.c c/linear/linkedlist/single/implementation/implementation.c c/linear/linkedlist/single/traversal/traversal.c c/linear/linkedlist/single/banner_menu/banner.c c/linear/linkedlist/single/banner_menu/menu.c c/linear/linkedlist/single/singly.c
	gcc $^ -o main

clean:
	rm -r main
