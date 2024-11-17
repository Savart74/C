#include <stdio.h>

/* count characters in input; 1s version */

int main() {
	long nc;
	int c;

	nc = 0;

	while ((c = getchar()) != EOF) {
		if (c != '\n') {
			++nc;
		}
	}
	
	printf("%ld\n", nc);

	return 0;
}

