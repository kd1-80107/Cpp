#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;
    string designation;

public:
    Employee()
    {
        id = 0;
        sal = 0;
        //cout << "Inside the parameterless employee Ctor" << endl;
    }

    Employee(int id, float sal, string designation)
    {
        //cout << "Inside the employee Ctor" << endl;
        this->designation = designation;
    }

    void setId(int id)
    {
        this->id = 1;
    }

    int getId()
    {
        return this->id;
    }

    void setSal(float sal)
    {
        this->sal = sal;
    }

    int getSal()
    {
        return this->sal;
    }

    void setDesignation(string designation)
    {
        this->designation = designation;
    }

    string getDesignation()
    {
        return this->designation;
    }

    void acceptEmployee()
    {
        cout << "Enter empid = ";
        cin >> this->id;
        cout << "Enter salary = ";
        cin >> this->sal;
    }

    void displayEmployee()
    {
        cout << " EmpId : " << this->id << endl;
        cout << "Salary : " << this->sal << endl;
    }
};

class manager : virtual public Employee
{
private:
    float bonus;

public:
    manager()
    {
        //cout << "Inside parameterless Ctor manager" << endl;
        this->bonus = 0;
    }
    manager(int id, float sal, float bonus, string designation)
    {
        cout << "Inside manager";
        this->bonus = bonus;
    }

    void setBonus(float bonus)
    {
        this->bonus = bonus;
    }

    int getBonus()
    {
        return this->bonus;
    }

protected:
    void acceptManager()
    {

        cout << "Enter bonus = " << endl;
        cin >> this->bonus;
    }

    void displayManager()
    {
        cout << "Bonus : " << this->bonus << endl;
    }
};

class salesman : virtual public Employee
{
private:
    float comm;

public:
    salesman()
    {
        comm = 0;
        //cout << "Inside parameterless CTR the Salesman" << endl;
    }

    salesman(float comm)
    {

        cout << "Inside the Salesman" << endl;
        this->comm = comm;
    }

    void setComm(float comm)
    {
        this->comm = comm;
    }

    int getComm()
    {
        return this->comm;
    }

protected:
    void acceptSalesman()
    {

        cout << "Enter a Commission: ";
        cin >> this->comm;
    }

    void displaySalesman()
    {

        cout << "Commission : " << this->comm << endl;
    }
};

class sales_manager : public salesman, public manager
{
private:
public:
    sales_manager()
    {
        //cout << "Inside parameterless Ctr sales_manager" << endl;
    }
    sales_manager(int id, float sal, float bonus, float comm, string designation)
    {
        cout << "Inside parametererised Ctr sales_manager";

        Employee ::setId(id);
        Employee::setSal(sal);
        salesman ::setComm(comm);
        manager ::setBonus(bonus);
    }

    void acceptSalesManage()
    {
        Employee ::acceptEmployee();
        salesman ::acceptSalesman();
        manager ::acceptManager();
    }

    void displaySalesManager()
    {
        cout << "******************************" << endl;
        Employee ::displayEmployee();
        salesman ::displaySalesman();
        manager ::displayManager();
        cout << "******************************" << endl;
    }
};

int main()
{
    // sales_manager s(1,2,3,4);
    // // s.displayEmployee();
    // // s.getId();
    // // s.getSal();
    // // s.setId(1);
    // // s.setSal(100);
    // // s.acceptSalesManage();
    // s.displaySalesManager();

    int designationCount = 0;
    int choice;

    cout << "Menu:" << endl;
    cout << "1. Accept Employee" << endl;
    cout << "2. Display the count of all employees with respect to designation" << endl;
    cout << "3. Display respective designation employees" << endl;
    cout << "4. Exit" << endl;

    while (choice =! 0)
    {
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            sales_manager employee;
            employee.acceptSalesManage();

            string designation = "Unknown";
            if (employee.getId() != 0)
            {
                designation = employee.getDesignation();
            }
            designationCount++;
            break;
        }
        case 2:
        {

            cout << "Employee Counts based on Designation:" << endl;
            for (int i =0; i<designationCount ; i++) 
            {
                cout << designationCount;
            }
            break;
        }
        case 3:
        {

            string searchDesignation;
            cout << "Enter the designation to display employees: ";
            cin >> searchDesignation;

            break;
        }
        case 4:
            
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}