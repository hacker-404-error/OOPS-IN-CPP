#include <iostream>
#include <conio.h>
using namespace std;

class A;
class B
{
private:
    int b;

public:
    void getdata()
    {
        cout << "Enter the Value of B: " << endl;
        cin >> b;
    }
    friend void display(A, B);
    friend void exchange(A &, B &);
};

class A
{
private:
    int a;

public:
    void getdata()
    {
        cout << "Enter the Value of A: " << endl;
        cin >> a;
    }
    friend void display(A , B);
    friend void exchange(A &, B &);
};

void exchange(A &x, B &y)
{
    int temp;
    temp = x.a;
    x.a  = y.b;
    y.b = temp;

}
void display(A x, B y)
{
    cout<<"A="<<x.a<<endl;
    cout<<"B="<<y.b<<endl;

}
int main()
{
    system("cls");
    A a;
    B b;
    a.getdata();
    b.getdata();
    cout<<"Before Exchage:"<<endl;
    display(a,b);
    exchange(a, b);
    cout<<"After Exchage:"<<endl;
    display(a,b);

    return 0;
}