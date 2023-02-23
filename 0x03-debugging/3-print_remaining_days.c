#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how days are
 * left in the year, taking leap years pnto account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0)
	{
		if (month > 2 && day >= 60)
		{
			day++
		}

		printf("day of the year: %d\n", day);
		printf("remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("invalid date: %02d/%02d /%04d\n", month, day - 31, year);
		}
		else
		{
			printf("day of the year: %d\n", day);
			printf("remaining days: %d\n , 365 - day);
		}
	}
}
	
