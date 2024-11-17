#include <stdio.h>

/* the program counts 'a' and 'v' in input. */

int main() {
	int c, count_of_a, count_of_v;

	count_of_a = 0;
	count_of_v = 0;

	while ((c = getchar()) != '\n') {
		if (c == 'a' || c == 'A')
			++count_of_a;
		if (c == 'v' || c == 'V')
			++count_of_v;
	}
	printf("There %s  %d of \'a\' character%s\n", (count_of_a > 1 ? "are" : "is"), count_of_a, (count_of_a > 1 ? "s!" : "!"));
	printf("There %s  %d of \'v\' character%s\n", (count_of_v > 1 ? "are" : "is"), count_of_v, (count_of_v > 1 ? "s!" : "!"));

	return 0;
}	


