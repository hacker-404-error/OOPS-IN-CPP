/*
ARRAY OF OBJECTS:
    It is possible to make array of objects of type class
    and every objects will have their own data members
    but common member function
*/

#include <iostream>
#include <conio.h>
using namespace std;

class emplo
{
    // private:
    string name;
    int id;

public:
    void getdata()
    {
        cout << "\nEnter Name : ";
        getline(cin >> ws, name);
        cout << "Enter ID : ";
        cin >> id;
    }

    void display()
    {
        cout << "NMAE: " << name << "\n";
        cout << "ID: " << id << "\n\n";
    }
};

int main()
{
    system("cls");
    emplo e[2]; // array of objects

    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter Emplyee Detail " << i + 1 << ":";
        e[i].getdata(); // Getting data of all objects
    }

    cout << "\n\nEmployee Details : \n\n";
    for (int i = 0; i < 2; i++)
    {
        e[i].display(); // Display data of all objects
    }

    getch();
    return 0;
}