#include <iostream>
#include <conio.h>
using namespace std;

class Swap
{
private:
    int a;
    int b;

public:
    void getdata();
    void Swapdata(Swap &);
    void display(Swap);
};
void Swap::getdata()
{
    cout << "Enter the Value of A: ";
    cin >> a;
    cout << "Enter the Value of B: ";
    cin >> b;
}
void Swap::Swapdata(Swap &s2)
{
    Swap temp;

    temp.a = s2.a;
    temp.b = s2.b;
    s2.a = a;
    s2.b = b;
    a = temp.a;
    b = temp.b;
}
void Swap::display(Swap s2)
{
    cout << "Object 1:" << endl;
    cout << "A:" << a << endl;
    cout << "B:" << b << endl;
    cout << "Object 2:" << endl;
    cout << "A:" << s2.a << endl;
    cout << "B:" << s2.b << endl;
}
int main()
{
    system("cls");
    Swap s1;
    cout << "Object 1:" << endl;
    s1.getdata();

    Swap s2;
    cout << "Object 2:" << endl;
    s2.getdata();

    cout << "Before swaping of Objects:" << endl;
    s1.display(s2);
    s1.Swapdata(s2);
    cout << "After Swapping of Objects:" << endl;
    s1.display(s2);
    return 0;
}
