//F = (C * 9/5) + 32
#include <stdio.h>
int main()
{
	float C;
	float F;
	printf("Enter C value =");
	scanf("%f", &C);
	F = ((C * 9/5) + 32);
	printf("F = %f\n", F);
}
