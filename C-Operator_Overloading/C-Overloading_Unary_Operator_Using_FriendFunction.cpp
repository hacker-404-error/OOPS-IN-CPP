#include<iostream>
#include<conio.h>
using namespace std;

class overFunc
{
    private:
        int a;
        int b;
    public:
        void get_element(int,int);
        void display();
        friend void operator-(overFunc &);
        friend void operator+(overFunc &);
        friend void operator!(overFunc &);
        friend void operator~(overFunc &);
};

void overFunc :: get_element(int x,int y)
{
    a=x;
    b=y;
}

void overFunc :: display()
{
    cout<<"a = "<<a<<"\n"<<"b = "<<b<<endl;
}

void operator-(overFunc &obj1)
{
    obj1.a= -obj1.a;
    obj1.b= -obj1.b;
}
void operator+(overFunc &obj2)
{
    obj2.a= +obj2.a;
    obj2.b= +obj2.b;
}
void operator!(overFunc &obj3)
{
    obj3.a= !obj3.a;
    obj3.b= !obj3.b;
}
void operator~(overFunc &obj4)
{
    obj4.a= ~obj4.a;
    obj4.b= ~obj4.b;
}
int main()
{
    system("cls");
     overFunc op1;
    op1.get_element(2,3);
    cout<<"calling operator -"<<endl;
    -op1;
    op1.display();

    overFunc op2;
    op2.get_element(-2,-3);
    cout<<"Calling operator +"<<endl;
    +op2;
    op2.display();

    overFunc op3;
    op3.get_element(0,1);
    cout<<"Calling operator !"<<endl;
    !op3;
    op3.display();

    overFunc op4;
    op4.get_element(0,1);
    cout<<"Calling operator ~"<<endl;
    ~op4;
    op4.display();

    getch();
    return 0;
}
