#include <stdio.h>

void print_all_chars(char string[]);

int main(void) {
	char name[15];
	printf("What is your name?\n");
	scanf("%s", name);

	printf("\nName: %s\nPointer: %p\n", name, &name);

	char (*pointer)[15] = &name;

	printf("\n\nName (pointer): %s\nMemory address: %p\n", *pointer, pointer);
	printf("\nMemory address (variable): %p\nMemory address (pointer): %p\n", &name, pointer);

	printf("\nAddress of each character\n");
	print_all_chars(name);

	return 0;
}

void print_all_chars(char string[]) {
	int i = 0;
	do {
		printf("Char: %c\tPointer: %p\n", string[i], &string[i]);
		i++;
	} while(string[i] != '\0');

	return;
}