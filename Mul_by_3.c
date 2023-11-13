#include <stdio.h>
int main()
{
	int input;
	scanf ("%d", &input);
	if (input == 0) {
		printf ("Not a multiple of 3");
	} else if (input % 3 == 0) {
		printf ("Indeed multiple of 3");
	} else 
		printf ("It is not a multiple of 3");
	return 0;
}
