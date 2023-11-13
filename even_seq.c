#include <stdio.h>
int main()
{
	int input;
	int counter;
	scanf("%d", &input);
	for(counter = 2; counter <= input; counter = counter + 2) {
		printf("%d\n", counter);
	}
	return 0;
}
		
