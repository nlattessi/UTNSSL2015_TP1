/* TP #1
 * Nahuel Lattessi
 * 20150407
 */

#include <stdio.h>

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Celsius | Fahr\n\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius * (9.0/5.0)) + 32.0;
		printf("%6.0f  | %3.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}