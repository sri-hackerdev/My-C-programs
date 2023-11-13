#include <stdio.h>

#define PI	3.14

int main ()
{
	float diameter;
	float radius;
	float circumference;
	float area;
	
	printf("Enter Diameter value =");
	scanf("%f", &diameter);
	radius = (diameter / 2);
	circumference = (2 * radius * PI);
	area = (PI * (radius * radius));
	printf("circumference: %f\n", circumference);
	printf("area: %f\n", area);
}
