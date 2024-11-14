#include <stdio.h>

/* Verify that the expression getchar() ! = EOF is 0 or 1 */

int main() {
	int c;
	char ch;

	while (c = ((ch = getchar()) != EOF)) {
		if (ch != '\n') {
			printf("%d\n", c);
		}
	}

	printf("Now c = %d\n", c);

	return 0;
}
