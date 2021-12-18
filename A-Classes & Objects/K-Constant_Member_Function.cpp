/*
CONSTANT MEMBER FUNCTION:
    if a member function is not altering any data then it can be declared as contant
    if const member function tries to alter any data then compiler will through an error
    const keyword must be after member function declaration and defination */

#include<iostream>
#include<conio.h>
using namespace std;

class struc_ture
{
    int a,b;  
    public: 
    void getdata(int x, int y)
    {

        a=x;
        b=y;

    }
    void putdata() const;
};

void struc_ture :: putdata() const
{
    int sum=0;
    cout<<"sum is:"<<a+b<<endl;
}
int main()
{
    system("cls");

    struc_ture b; 
    int x,y;
    cout<<"Enter number1: "<<endl;
    cin>>x;
    cout<<"Enter number2: "<<endl;
    cin>>y;
    b.getdata(x,y);
    b.putdata();

    cout<<"\n\n";

    struc_ture c;
    cout<<"enter number 1:"<<endl;
    cin>>x;
    cout<<"enter number 2:"<<endl;
    cin>>y;
    c.getdata(x,y);
    c.putdata();

    getch();
    return 0;
}