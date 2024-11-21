#include <stdio.h>

/* replacing many blanks with a single one. */

int main() {
	int ch, gap_count;

	gap_count = 0;
	while ((ch = getchar()) != '\n') {
		if (ch == ' ') {
			++gap_count;
			if (gap_count == 1)
				putchar(ch);
		} else {
			gap_count = 0;
			putchar(ch);
		}
	}

	return 0;
}
