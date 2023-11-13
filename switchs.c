/*
 * Author: Srihari M <sir.srihari@gmail.com>, 2023
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version. 
 */

#include <stdio.h>

int main()
{
	int input;

	printf("Type random value (Numbers 1,2,3 only)");
	scanf("%d", &input);

	switch(input) {
		case 1:
			printf("Your value is 1\n");
			break;
		case 2:
			printf("Your value is 2\n");
			break;
		case 3:
			printf("Your value is 3\n");
			break;
		default:
			printf("Your value is not a part of the given numbers\n");
			break;
	}

	return 0;
}
