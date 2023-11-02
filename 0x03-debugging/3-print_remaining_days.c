#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - checks if a year is a leap year
 * @year: year to be checked
 * Return: 1 if it's a leap year, 0 otherwise
 */
int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    return 0;
}

/**
 * day_of_year - calculates the day of the year for a given date
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: day of the year
 */
int day_of_year(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;

    if (is_leap_year(year))
        days_in_month[2] = 29;

    if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
        return -1;

    for (i = 1; i < month; i++)
        day += days_in_month[i];

    return day;
}

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
    int dayOfYear = day_of_year(month, day, year);

    if (dayOfYear == -1)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    int remainingDays = is_leap_year(year) ? 366 - dayOfYear : 365 - dayOfYear;

    printf("Day of the year: %d\n", dayOfYear);
    printf("Remaining days: %d\n", remainingDays);
}

