#include <stdio.h>

/* the program that prints its input one word per line. */

int main() {
	int c;

	while((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		else 
			putchar('\n');
	}

	return 0;
}
