#include <stdio.h>


int cal_area(int l, int b)
{
	return l*b;
}


int cal_perimeter(int l, int b)
{
	return (2*(l+b));
}


int main()
{
	int l;
	int b;
	int area;
	int perimeter;

	printf("Length value(no alphabets)):");
	scanf("%d", &l);
	printf("\nBreath value(no alphabets)):");
	scanf("%d", &b);
	area = cal_area(l,b); 
	printf(" area = %d\n", area);
	perimeter = cal_perimeter(l,b); 
	printf(" perimeter = %d\n", perimeter);
}
