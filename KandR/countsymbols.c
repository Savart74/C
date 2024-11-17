#include <stdio.h>

/* count blanks, tabs, and newlines */

int main() {
	int c, tabs, blanks, lines;

	tabs = 0;
	blanks = 0;
	lines = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			++tabs;
		}
		if (c == '\n') {
			++lines;
		}
		if (c == ' ') {
			++blanks;
		}
	}

	printf("There are %d blanks.", blanks);
	printf("There are %d tabs.", tabs);
	printf("There are %d lines.", lines);

	return 0;
}
