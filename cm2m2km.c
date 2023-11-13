/*
 * Program to convert length from centimeter to meter or kilometer
 *
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
	/*
	 * Variables for centimeter, meter and kilometer
	 * 1KM = 1000m
	 * 1 M = 100cm
	 */
	float centimeter, meter, kilometer;

	printf("Enter Centimeter:");
	scanf("%f", &centimeter);

	meter = (centimeter / 100);
	kilometer = (meter / 1000);

	printf("Meter = %5.3f\n", meter);
	printf("Kilometer = %5.5f\n", kilometer);
}
