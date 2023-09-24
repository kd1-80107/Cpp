// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();


#include<iostream>
using namespace std;
struct Date
{
    int day ;
    int month ;
    int year ;

    void initDate()
    {
        day ;
        month ;
        year ;
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

    void printDateOnonsole()
    {
        cout << "the date is= " << day << '/' << month << '/' << year << endl;
    }

    bool isLeapYear()
    {
        if((year%100 != 0) && (year%4 == 0))
        {
            cout << "the leap year..!" << endl;
            return 1;
        }
        else
            cout << "Not a leap year..!";
            return 0;
    }
};
void initdate(struct Date *ptrDate);
void printDateOnonsole(struct Date *ptrDate);
void acceptDateFromConsole(struct Date *ptrDate);

int main ()
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
            d1.printDateOnonsole();
            break;

        case 2:
            d1.acceptDateFromConsole();
            d1.isLeapYear();
            d1.printDateOnonsole();
            break;

        case 3:
            d1.printDateOnonsole();

            default:
                break;


    }
} while (choice != 0);
}
