#include <stdio.h>

/* count blanks, tabs, and newlines */

int main() {
	int c, n_tabs, n_blanks, n_newlines;
	
	n_tabs = n_blanks = n_newlines = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++n_blanks;
		if (c == '\n')
			++n_newlines;
		if (c == '\t')
			++n_tabs;	
	}
	printf("There %s %d blank character%s\n", (n_blanks > 1 ? "are" : "is"), n_blanks, (n_blanks > 1 ? "s." : "."));
	printf("There %s %d tab character%s\n", (n_tabs > 1 ? "are" : "is"), n_tabs, (n_tabs > 1 ? "s." : "."));
	printf("There %s %d newline character%s\n", (n_newlines > 1 ? "are" : "is"), n_newlines, (n_newlines > 1 ? "s." : "."));

	return 0;	
}
