#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Function to get the number of days in a given month
int daysInMonth(int month, int year) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return days[month];
}

// Function to calculate the next date
void getNextDate(int *day, int *month, int *year) {
    (*day)++;
    if (*day > daysInMonth(*month, *year)) {
        *day = 1;
        (*month)++;
        if (*month > 12) {
            *month = 1;
            (*year)++;
        }
    }
}

int main() {
    int day, month, year;

    // Input the current date
    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    // Check if the input date is valid
    if (day <= 0 || day > daysInMonth(month, year) || month <= 0 || month > 12 || year <= 0) {
        printf("Invalid date.\n");
        return 1;
    }

    // Calculate the next date
    getNextDate(&day, &month, &year);

    // Print the next date
    printf("Next date is: %02d %02d %04d\n", day, month, year);

    return 0;
}
   
