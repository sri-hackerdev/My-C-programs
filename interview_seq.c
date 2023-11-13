#include <stdio.h>
int main()
{
	int input;
	int counter;
	scanf("%d", &input);
	for(counter = 1; counter <= input; counter += 1) {
		if((counter % 3 == 0) && (counter % 5 == 0) ) {
			printf("IBM LTC,");
		} else if(counter % 3 == 0) {
			printf("IBM,");
		} else if(counter % 5 == 0) {
			printf("LTC,");
		} else {
			printf("%d,", counter);
		}
	}
	return 0;
}
