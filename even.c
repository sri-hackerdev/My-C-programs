#include <stdio.h>
int main()
{
	int input = 0;
	scanf ("%d" , &input);
	if (input == 0) {
		printf("Neither Even nor Odd\n");
	} else if (input % 2 == 0) {
		printf("Even Number\n");
	} else {
		printf("Odd Number\n");
	} 
	return 0;
}
