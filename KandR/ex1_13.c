#include <stdio.h>

/* Horizontal histogram of the lengths of words in input. */

int main() {
	int c, prev_c, i, j, count;
	int num_of_words[10];

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\n') {
			++count;
		} 
		else {
			if (c != prev_c) 
				++num_of_words[count];

			count = 0;
	 	}	

		prev_c = c;
	}
	
	for (i = 0; i < 10; i++) {
		printf(" %d", num_of_words[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++) {
		if (num_of_words[i] > 0) {
			for (j = 0; j < num_of_words[i]; j++) {
				printf("|");
			}
			printf("\t %d letter word%s\n", i, num_of_words[i] > 1 ? "s!" : "!");
		}
	}

	return 0;
}
