main:
	gcc main.c display.c fonts.c memory.c -fsanitize=address
