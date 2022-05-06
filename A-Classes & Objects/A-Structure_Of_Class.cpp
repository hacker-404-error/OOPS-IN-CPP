#include <iostream>
#include <conio.h>
using namespace std;

class struc_ture // class declaration and defination
{
    int a; // By default private:
private:
    int b; // private:section

public: // public section
    void getdata(int x, int y)
    {
        // defining getdata() inside class by default it is inline
        a = x;
        b = y;
    }
    void putdata(); // MemberFunction delaration
};

void struc_ture ::putdata()
{
    // defining member function(putdata()) outside class  so,it is not inline.
    //  this function can be inline by using inline keyword infront of function defination
    int sum = 0;
    cout << "Sum is:" << a + b << endl;
}
int main()
{

    system("cls");

    /*Different memory allocation for data members of each object but there is only
    one memory allocation for member function...as many as objects created their
    data members will also be created .. */

    struc_ture ob1; // creating object
    int x, y;
    cout << "Enter Number 1: ";
    cin >> x;
    cout << "Enter Number 2: ";
    cin >> y;
    // calling member function using member function
    ob1.getdata(x, y);
    ob1.putdata();

    /* only member funtion can access private members  (except friend function)
    objects are not allowed to access private members*/

    cout << "\n\n\n\n";

    // creating another object
    struc_ture ob2;
    cout << "Enter Number 1: ";
    cin >> x;
    cout << "Enter Number 2: ";
    cin >> y;
    // callling member function using object
    ob2.getdata(x, y);
    ob2.putdata();

    getch();
    return 0;
}
