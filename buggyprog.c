
#include <stdio.h>
#include <string.h>
#include <err.h>
#include <stdlib.h>

void
handle_command(char *cmdline) {
	char *cmd, *keystring, *value;
	int key;

	cmd = strsep(&cmdline, ",");
	keystring = strsep(&cmdline, ",");
	key = atoi(keystring);
	value = strsep(&cmdline, ",");
	printf("%s,%s=%d,%s\n", cmd, keystring, key, value);
}

int
main(int argc, char *argv[]) {
	for (int i = 1; i < argc; i++) {
		handle_command(argv[i]);
	}
}
