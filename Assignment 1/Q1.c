// Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
// day, month, year. Implement the following functions.
// void initDate(struct Date* ptrDate);
// void printDateOnConsole(struct Date* ptrDate);
// void acceptDateFromConsole(struct Date* ptrDate);


#include <stdio.h>


struct Date {
    int day;
    int month;
    int year;
};


void initDate(struct Date* ptrDate) {
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;
}


void printDateOnConsole(struct Date* ptrDate) {
    printf("Date: %02d/%02d/%04d\n", ptrDate->month, ptrDate->day, ptrDate->year);
}


void acceptDateFromConsole(struct Date* ptrDate) {
    printf("Enter date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &(ptrDate->month), &(ptrDate->day), &(ptrDate->year));
}

int main() 
{
    struct Date date;
    int choice;

   
    initDate(&date);

    do {
        printf("\nMenu:\n");
        printf("1. Initialize Date\n");
        printf("2. Print Date\n");
        printf("3. Accept Date\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            
            case 1:
                initDate(&date);
                printf("Date initialized.\n");
                break;
            case 2:
                printDateOnConsole(&date);
                break;
            case 3:
                acceptDateFromConsole(&date);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
  

      }
    } while (choice != 4);

    return 0;
}


