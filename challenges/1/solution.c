#include <stdio.h>
/* include standard I/O library, defines fputs() */

int main(void) {
/* defines function main(), which throws away all command-line arguments */
	fputs("Hello, world!\n", stdout);
	/* prints "Hello, world!" and a newline to standard output */
	return 0;
	/* indicate that the program finished successfully */
}
/* end function main() */
