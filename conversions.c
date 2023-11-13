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

	printf("Types of conversions:\n");
	printf("	1) Celsius to Fairhen\n");
	printf("	2) Centimeter to Meter to Kilometer\n");
	printf("	Enter the any ONE of the option for calculation: ");
	scanf("%d", &input);

	switch(input) {
		case 1:
			float celsius, fairhen;
			
			printf("Enter the value for Celsius (in numbers only): ");
			scanf("%f", &celsius);
			fairhen = ((celsius * 9 / 5 ) + 32);
			printf("Fahrenheit is: %4.2f \n", fairhen);
			break;
		case 2:
			float centimeter, meter, kilometer;

			printf("Enter the value for centimeter (in numbers only): ");
			scanf("%f", &centimeter);

			meter = (centimeter / 100);
			printf("\tMeter = %5.2f\n", meter);
			kilometer = (meter / 1000);
			printf("\tKilometer = %5.5f\n", kilometer);
			break;
		default:
			printf("Not a valid input\n");
			break;
	}

	return 0;
}
