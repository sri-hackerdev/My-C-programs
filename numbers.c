#include <stdio.h>
int main ()
{
	int input;
	scanf ("%d", &input);
	if (input < 0) {
		printf("invalid number");
		return 0;
	} else if (input > 0) {
		printf("Natural number");
		return 0;
	} else if (input == 0) {
		printf ("Whole number");
		return 0;
	}
	return 0;
}
