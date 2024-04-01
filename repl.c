#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {
	puts("Lispy version 0.0.0.1");
	puts("Press Ctrl+c to Exit\n");

	// a never ending loop
	while(1) {
		// Output our prompt and get input
		char* input = readline("lispy> ");

		// Add input to history
		add_history(input);

		// Echo input back to the user
		printf("No you're a %s\n", input);

		// Free retreived input
		free(input);
	}

	return 0;
}
