#include <stdio.h>

/* replacing tab by \t, backspace by \b, backslash by \\ */

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			putchar('\
	}
