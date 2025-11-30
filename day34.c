#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    union Address u;
    printf("Enter Name: ");
    scanf("%s", u.name);
    printf("Enter Home Address: ");
    scanf("%s", u.home_address);
    printf("Enter Hostel Address: ");
    scanf("%s", u.hostel_address);
    printf("Enter City: ");
    scanf("%s", u.city);
    printf("Enter State: ");
    scanf("%s", u.state);
    printf("Enter ZIP: ");
    scanf("%s", u.zip);
    printf("Name: %s\n", u.name);
    printf("Home Address: %s\n", u.home_address);
    printf("Hostel Address: %s\n", u.hostel_address);
    printf("City: %s\n", u.city);
    printf("State: %s\n", u.state);
    printf("ZIP: %s\n", u.zip);

    return 0;
}