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
	
	printf("Enter Natural number: ", input);
	scanf("%d", &input);

	printf("Is given number is Natual Number -- %s\n",
		(input > 0)?"True":"False");

	return 0;
}
