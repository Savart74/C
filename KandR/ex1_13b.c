#include <stdio.h>

#define MAXLST 10	\\ max size of the array
#define MAXLENGTH 10	\\ max size of the word
#define OUT 0		\\ outside of the word state
#define IN 1 		\\ inside of the word

/* print horizontal histogram of the number of the words in input */

int main() {

	int i, char_input, word_symbols, state, overflow_words;
	int num_of_words[MAXLIST];

	state = OUT;
	word_symbols = 0;
	overflow_words = 0;

	/* initialize the array of the words */

	for (i = 0; i < MAXLIST; ++i) {
		num_of_words[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (word_symbols > 0) { 
				if (word_symbols < MAXLENGTH)
					++num_of_words[word_symbols];
				else
					++overflow_words;

				word_symbols = 0;
			} else if (state == OUT) {
				state == IN;
				word_symbols = 1;
			} else {
				++word_symbols;
			}
		}
	}

	
