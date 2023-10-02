#include<iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public :
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    date(int day, int month, int year)
    {
         this->day = day;
        this->month = month;
        this->year = year;
    }

    int getDay()
    {
        return this->day;
    }

    void setDay(int day)
    {
        this->day = day;
    }

    int getMonth()
    {
        return this->month;
    }

    void setMonth(int month)
    {
        this->month =month;
    }

    int getYear()
    {
        return this->year;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    void acceptDate()
    {
        
        cout << "Enter a day : "<< endl;
        cin >> day;

        cout << "Enter a month : "<< endl;
        cin >> month;

        cout << "Enter a year : "<< endl;
        cin >> year;
        
    }

     void displayDate()
    {
        
        cout <<"Day : "<< this->day <<endl;
        cout <<"Month : "<< this->month <<endl;
        cout <<"Year : "<< this->year <<endl;
       

    }
    
    bool isLeapYear()
    {
        if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            cout << "the leap year..!" << endl;
            return 1;
        }
        else
            cout << "Not a leap year..!";
            return 0;
    }

};

class person
{
    string name;
    string addr;
    date birth_date;
public :
    person()
    {
     this->name;
     this->addr;
     this->birth_date;
     
    }

    person(string name,string,int day,int month,int year) : birth_date(day,month,year)
    {
        this->name = name;
        this->addr = addr;
        //this->birth_date;   
    }

    string getName()
    {
        return this->name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getAddr()
    {
        return this->addr;
    }

    void setAddr(string addr)
    {
        this->addr = addr;
    }

    date getBirthDate()
    {
        return this->birth_date;
    }

    void setBirthDate(date birth_date)
    {
        this->birth_date = birth_date;
    }

    void acceptPerson()
    {
        
        cout << "Enter a name : "<< endl;
        cin >> this->name;

        cout << "Enter a address : "<< endl;
        cin >> this->addr;

        cout << "Enter a Birth Date : "<< endl;
        birth_date.acceptDate();
        

    }

    void displayPerson()
    {
        cout <<"*****************"<<endl;
        cout <<"Name : "<< this->name <<endl;
        cout <<"Address : "<< this->addr <<endl;
        cout <<"Birth date : "<< endl;
        birth_date.displayDate();
        

    }
};

class employee : person
{
    private :
        int id;
        float sal;
        string dept;
        date joining;
public :
        employee()
        {
            this->id = 0;
            this->sal = 0;
            this->dept;
            this->joining;
        }

        employee(int id,float sal,string dept,int day,int month,int year) : joining(day,month,year)
        {
            this->id = id;
            this->sal = sal;
            this->dept = dept;
            //this->joining = joining;
        }

        int getId()
        {
            return this->id;
        }

        void setId(int id)
        {
            this->id = id;
         
        }int getSal()
        {
            return this->sal;
        }

        void setSal(float sal)
        {
            this->sal = sal;
         
        }

        string getDept()
        {
            return this->dept;
        }

        void setDept(string dept)
        {
            this->dept = dept;
        }

        date getJoiningDate()
        {
            return this->joining;
        }

        void setJoiningDate(date joining)
        {
            this->joining = joining ;
         
        }

        void acceptEmployee()
    {
        
        person ::acceptPerson();
        cout << "Enter the ID : "<< endl;
        cin >> this->id;

        cout << "Enter a Salary : "<< endl;
        cin >> this->sal;

        cout << "Enter a Dept : "<< endl;
        cin >> this->dept;

        cout << "Enter a Joining Date : "<< endl; 
        joining.acceptDate();
        

    }

    void displayEmployee()
    {   
        
        person ::displayPerson();
        cout <<"*****************"<<endl;
        cout <<"ID : "<< this->id <<endl;
        cout <<"Sal : "<< this->sal <<endl;
        cout <<"Joining Date : "<< endl; 
        joining.displayDate();
        

    }

};

int main()
{
    employee e;
    e.acceptEmployee();
    e.displayEmployee();

    // person p;
    // p.acceptPerson();
    // p.acceptPerson();

    
}