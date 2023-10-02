#include <iostream>
using namespace std;

class Product
{
private:
    int id;
    string title;
    float price;
    string type;

public:
    Product()
    {
        this->id = 0;
        this->title = " ";
        this->price = 0;
        this->type = " ";
    }

    Product(int id, string title, float price)
    {
        this->id = id;
        this->title = title;
        this->price = price;
        this->type = type;
    }

    int getId()
    {
        return this->id;
    }

    void setId(int id)
    {
        this->id = id;
    }

    string getTitle()
    {
        return this->title;
    }

    void setTitle(string title)
    {
        this->title = title;
    }

    float getPrice()
    {
        return this->price;
    }

    void setPrice(float price)
    {
        this->price = price;
    }

    string getType()
    {
        return this->type;
    }

    void setType(string type)
    {
        this->price = price;
    }
};

class Book : public Product
{
private:
    string author;

public:
    Book()
    {
        setId(1);
        setTitle("Shreeman Yogi");
        setPrice(956);
        setType("B");
        this->author = "Ranjeet Patil";
    }

    Book(string author, int id, string title, float price, string type)
    {
        setId(id);
        setTitle(title);
        setPrice(price);
        setType(type);
        this->author = author;
    }

    string getAuthor()
    {
        return this->author;
    }

    void setAuthor()
    {
        this->author = author;
    }
};

class Tape : public Product
{
    string artist;

public:
    Tape()
    {
        setId(2);
        setTitle("Abc");
        setPrice(499);
        setType("T");
        this->artist = "Xyz";
    }

    Tape(string author, int id, string title, float price, string type, string artist)
    {
        setId(id);
        setTitle(title);
        setPrice(price);
        setType(type);
        this->artist = artist;
    }

    string getArtist()
    {
        return this->artist;
    }

    void setArtist(string artist)
    {
        this->artist = artist;
    }
};

int main()
{
    Product *arr[3];
    cout << "Please Choose the Options Below..!" << endl;
    cout << "1.Buy a Book." << endl;
    cout << "2.Buy a Tape." << endl;
    cout << "3.Get Your Bill." << endl;
    cout << "0.Exit." << endl;

    int choice;
    cin >> choice;
    int index = 0;
    float total = 0;
    float Ptotal = 0;
    int NumOfBooks = 0;
    int NumOfTapes = 0;
    float price ;
    //Book b;


    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            if (index < 3)
            {
                arr[index] = new Book;
                cout << "Book Buyed Sucessfully...!" << endl;
                index++;
            }
            else
            {
                cout << "As Per Limit,You have Completed 3 items " << endl;
                cout << "Thank You For Shopping. Visit Again...!  " << endl;
            }
        break;

        case 2:
            if (index < 3)
            {
                arr[index] = new Tape;
                cout << "Tape Buyed Sucessfully...!" << endl;
                index++;
            }
            else
            {
                cout << "As Per Limit,You have Completed 3 items " << endl;
                cout << "Thank You For Shopping. Visit Again...!  " << endl;
            }
        break;

        case 3:
            for (int i = 0; i < index; i++)
            {
                if ("T" == arr[i]->getType())
                {
                    NumOfTapes++;
                    price = arr[i]->getPrice();
                    total = total + (price * 0.95);
                    Ptotal = Ptotal + (total);
                }
                else
                {
                    NumOfBooks++;
                    price = arr[i]->getPrice();
                    total = total + (price * 0.90);
                    Ptotal = Ptotal + (total);
                }
            }
            cout << "Total Number of Books You Have Buyed :" << NumOfBooks << endl;
            cout << "Total Number of Tapes Tou Have Buyed : " << NumOfTapes << endl;
            cout << "Total Discounted price is : " << total << endl;
            cout << "Total Original price is : " << Ptotal << endl;

            break;

        default:
            cout << "Please Enter Valid Choice....!" << endl;

        }
        cout <<"****************"<< endl;
            cout << "1.Buy a Book." << endl;
            cout << "2.Buy a Tape." << endl;
            cout << "3.Get Your Bill." << endl;
            cout << "0.Exit." << endl;
            cin>>choice;
    }

    return 0;
}
