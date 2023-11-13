#include <stdio.h>
int main()
{
	int input;
	int counter;
	scanf("%d", &input);
	for(counter = 1; counter <= input; counter += 1) {
		if (counter % 5 == 0) {
			printf("IBM\n");
		} else {
			printf("%d\n", counter);
		}
	}
	return 0;
}
