#include <stdio.h>

/* how getchar() sees input */

int main() {
	int c, charCount;

	charCount = 0;

	while ((c = getchar()) != '\n') {
		printf("%c", c);
		++charCount;
	}

	printf("\nYou entered %d characters!\n", charCount);

	return 0;
}

