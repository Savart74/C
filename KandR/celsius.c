#include <stdio.h>

/* print Fahrentheit -> Celsius table
 * 	for fahr = 0, 20, ..., 300 
 */

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrengeit to Celsius conversion.\n");
	printf("_________________________________\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}

