// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();




#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        this->day = 01;
        this->month = 01;
        this->year = 1900;
    }

    void acceptDateFromConsole()
    {
        cout <<"enter a day = ";
        cin >> day ;
        cout <<"Enter a month = ";
        cin >> month ;
        cout <<"Enter a year = ";
        cin >> year ;
    }

    void printDateOnConsole()
    {
        cout << "the date is= " << day << '/' << month << '/' << year << endl;
    }
    bool isLeapYear()
    {
        if ((year % 4 == 0)&&(year%100!=0)||(year % 400 == 0))
        {
            printf("\n the leap year \n");
            return true;
        }
        else
            printf("Not a leap year \n");
        return false;
    }
};
void initDate(struct Date *ptrDate);
void printDateOnConsole(struct Date *ptrDate);
void acceptDateFromConsole(struct Date *ptrDate);

int main()
{
    struct Date d1;
    int choice;
    do
    {
        cout <<"Enter choice : "<< endl;
        cout <<"1.Initialize date "<< endl;
        cout <<"2.Print date "<< endl;
        cout <<"3.Accept date "<< endl;
        cout <<"4.Exit "<< endl;
        cin >> choice;

        switch(choice)
        {
        case 1:
            d1.initDate();
            d1.isLeapYear();
            d1.printDateOnConsole();
            break;

        case 2:
            d1.acceptDateFromConsole();
            d1.isLeapYear();
            d1.printDateOnConsole();
            break;
        case 3:
            // acceptDateFromConsole(&d1);
            d1.printDateOnConsole();
            d1.isLeapYear();

        default:
            break;
        }
    } while (choice != 0);
        return 0;
}
