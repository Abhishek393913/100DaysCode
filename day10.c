#include <stdio.h>

int main() {
    int ref_year = 1900, year, leap = 0, total_days = 0, day = 0;

    printf("Enter a year between 1900 and 2099: ");
    scanf("%d", &year);

    int temp_year = ref_year;

    while (temp_year < year) {
        if (temp_year % 4 == 0 && (temp_year % 100 != 0 || temp_year % 400 == 0)) {
            leap++;
        }
        temp_year++;
    }

    int diff = year - ref_year;
    total_days = diff * 365 + leap;  // Each leap year adds 1 more day
    day = total_days % 7;

    printf("The day on 01 January %d was ", year);

    switch(day) {
        case 0: printf("Monday.\n"); break;
        case 1: printf("Tuesday.\n"); break;
        case 2: printf("Wednesday.\n"); break;
        case 3: printf("Thursday.\n"); break;
        case 4: printf("Friday.\n"); break;
        case 5: printf("Saturday.\n"); break;
        case 6: printf("Sunday.\n"); break;
    }

    return 0;
}