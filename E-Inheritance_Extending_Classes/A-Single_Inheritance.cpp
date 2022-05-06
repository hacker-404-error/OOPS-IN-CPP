#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    private:
        int a,b;
    public:
        void get_element(int , int);
        void sum(int,int);
        void sub(int,int);
        void mul(int,int);
        void div(int,int);        
};
void Base :: get_element(int x, int y)
{
    a=x;
    b=y;
}

void Base:: sum(int x, int y)
{
    int result;
    result=x+y;
}
void Base:: sub(int x, int y)
{
    int result;
    result=x+y;
}
void Base:: mul(int x, int y)
{
    int result;
    result=x+y;
}
void Base:: div(int x, int y)
{
    int result;
    result=x+y;
}

class Derived : public Base // Public derivation of class Base
{
    private:
        int sum;
        int sub;
        float div;
        int mul;
    public:
        void display();
};

int main()
{
    system("cls");
    Derived Operation1;
    int x,y;
    cout<<"Enter First Element : ";
    cout<<"Enter Second Element : ";
    Operation1.get_element(x,y);

    getch();
    return 0;
}