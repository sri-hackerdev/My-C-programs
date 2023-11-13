#include <stdio.h>

int main()
{
	int ip = 0;
	int i=1, out=0;

	scanf("%d",&ip);

	for (i=1; i<=ip; i++) 
	{
		printf("before i = %d, out = %d\n", i, out);
		out = out + i;
		printf("after i = %d, out = %d\n", i, out);
	}

	printf("out = %d\n", out);
	return 0;
}
