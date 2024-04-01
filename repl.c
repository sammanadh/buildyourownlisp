#include <stdio.h>
#include <stdlib.h>

// declare a buffer for user input with a size of 2048
static char input[2048];

int main(int argc, char** argv) {
	puts("Lispy version 0.0.0.1");
	puts("Press Ctrl+c to Exit\n");

	// a never ending loop
	while(1) {
		// output or prompt user
		fputs("lispy>", stdout);

		// read a line of user input from standard input
		fgets(input, 2048, stdin);

		printf("No you are a %s", input);
	}

	return 0;
}
