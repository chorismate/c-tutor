#include <stdio.h>

int main(int argc, char **argv) {
/* this time, main() is declared such that it accepts command-line arguments */
	
	if(argc != 2) return 1;
	/* if wrong number of arguments, terminate with an error */
	
	printf("Hello, %s %s!", argv[1], argv[2]);
	/* prinf "Hello, ", the two arguments separated by a space, and an '!' */
	
	return 0;
}
