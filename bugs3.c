
#include <stdio.h>
#include <string.h>

int
main() {
	char *s = "Hello";
	printf("%s\n", s);
	strcpy(s, "Bye");
	printf("%s\n", s);
}
