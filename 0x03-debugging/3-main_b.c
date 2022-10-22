#include <stdio.h>
#include "main.h"
/**
 * main - take a date and print how many days are left
 * leap years int consideration
 * Return: 0
 */
int main(void)
{
	int month;
	int day;
	int year;

	month = 02;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);
	day = convert_day(month, day);

	print_remaining_days(month, day, year);
	return (0);
}
