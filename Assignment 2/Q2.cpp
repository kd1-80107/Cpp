#include<iostream>
using namespace std;

class Address
{
private :
        string building;
        string street;
        string city;
        int pin;

public :

        
        Address()
        {
        
        }

        Address(string building,string street,string city,int pin) : building(building),street(street),city(city),pin(pin)
        {
        //     this->building = building;
        //     this->city = city ;
        //     this->street = street ; 
        //     this->pin = pin;
        }

        void accept()
        {
                cout << "Enter the details of Address" <<endl;
                cout<< "1.Building" <<endl ;
                cout<< "2.City" <<endl ;
                cout<< "3.Street" <<endl ;
                cout<< "4.Pin"<< endl ;
                getline(cin,building);
                getline(cin,city);
                getline(cin,street);
                cin >> pin;

        }

        void display()
        {
                        cout << "***************"<<endl;
                        cout << "Address Details"<<endl;
                        cout << "1.Building : " << building <<endl;
                        cout << "2.City : " << city <<endl;
                        cout << "3.Street :" << street <<endl;
                        cout << "4.Pin : " << pin << endl;
                        cout << "***************"<<endl;
                        
        }

       string  get_Building(string building)
       {
         return this->building;
       }

       string get_street(string street)
       {
        return this->street;
       }

       string get_city(string city)
       {
        return this->city;
       }
       
       int get_pin(int pin )
       {
        return this->pin;
       }

       void set_Building(string Building)
       {
         this->building = building ;
       }

       void set_street(string street)
       {
        this->street = street;
       }

       void set_city(string city)
       {
        this->city = city;
       }
       
       void set_pin(int pin)
       {
        this->pin = pin;
       }

};

int main()
{
        Address a;
        Address a1("Abc","xyz","karad",100);
        a1.display();
        a1.accept();
        a1.display();
        a.set_Building("Hospital");
        a.set_city("basmat");
        a.set_street("peth");
        a.set_pin(123);
        //a.display();

        cout<< "Bulding is :" << a.get_Building("Hospital")<< endl;
        cout<< "City is :" << a.get_city("basmat")<< endl;
        cout<< "Street is :" << a.get_street("peth")<< endl;
        cout<< "Pincode is :" << a.get_pin(123) << endl;

        return 0;




}