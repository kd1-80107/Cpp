#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;

public:
    Employee()
    {
        id = 0;
        sal = 0;
        cout << "Inside the parameterless employee Ctor" << endl;
    }

    Employee(int id, float sal)
    {
        cout << "Inside the employee Ctor" << endl;
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
        cout << "Inside parameterless Ctor manager" << endl;
        this->bonus = 0;
    }
    manager(int id, float sal, float bonus)
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
        cout << "Inside parameterless CTR the Salesman" << endl;
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
        cout << "Inside parameterless Ctr sales_manager" << endl;
    }
    sales_manager(int id, float sal, float bonus, float comm)
    {
        cout << "Inside parametererised Ctr sales_manager";
      
        Employee ::setId(id) ;
        Employee:: setSal(sal) ;
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
        cout << "******************************"<<endl;
    }
};

int main()
{
    sales_manager s(1,2,3,4);
    // s.displayEmployee();
    // s.getId();
    // s.getSal();
    // s.setId(1);
    // s.setSal(100);
    // s.acceptSalesManage();
    s.displaySalesManager();
}