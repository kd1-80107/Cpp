// Q3. Write a menu driven program for Student in CPP language. Create a class student with data
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();

#include<iostream>
using namespace std;

class student
{
    int rollno;
    string name;
    float marks;

public:
    void initStudent()
    {
        this->rollno = 1;
        this->name = 'A' ;
        this->marks = 35 ;

    }
    
    void printStudentOnConsole()
    {
        cout<< "Enter a Roll Number " <<endl;
        cin >> rollno ;
        cout << "Enter a Name" <<endl;
        cin >> name;
        cout<< "Enter a Marks";
        cin >> marks ;


    }   

    void acceptStudentFromConsole()
    {
        cout << "RollN0= " << rollno <<endl;
        cout << "Name =" << name <<endl;
        cout << "Marks =" << marks <<endl;

    }


};

int main()
{
    int choice;
    student s; 

    do 
    {
    
    cout <<"Please Enter Your Choice..!" << endl;
    cout <<"1.Initiaze Student." << endl;
    cout <<"2.Print Student." << endl;
    cout <<"3.Accept Student." << endl;
    cout <<"4.Exit" << endl;
    cin >> choice ;

   switch (choice)
   {
   case 1:
   s.initStudent();
   s.printStudentOnConsole();
   s.acceptStudentFromConsole();
    break;

    case 2:
    //s.acceptStudentFromConsole();
    s.printStudentOnConsole();
    break;
    
    case 3:
    s.printStudentOnConsole();
    s.acceptStudentFromConsole();
    break;

    case 4:
    cout << "Exit";
    

    default: 
    cout << "Invalid choice..!"<<endl;
    
   }


   }while(choice !=0);

}
