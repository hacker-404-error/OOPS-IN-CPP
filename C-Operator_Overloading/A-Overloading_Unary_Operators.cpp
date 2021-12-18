/*OPERATOR OVERLOADING-
this concept came into existence because we want to use 
user defined data type as bult-in data types 
Eg- in int a,b; we can perform a+b;
but we also want to perform these operation on user defined datatype
Eg- class a,b;
a+b; this is possible only with the help of operator overloading
*/

// for unary operator we must not pass any argument to the member function
//or it will through an error

#include<iostream>
#include<conio.h>
using namespace std;
class opoverloading
{
    private:
        int a,b;
    public:
        void getdata(int,int);
        void display();
        void operator-();
        void operator+();
        void operator!();
        void operator~();
};
void opoverloading :: getdata(int x, int y)
{
    a=x;
    b=y;
}
void opoverloading :: display()
{
    cout<<"a = "<<a<<"\n"<<"b = "<<b<<endl;
}
void opoverloading :: operator-()
{
    a= -a;
    b= -b;
}
void opoverloading :: operator+()
{
    a= +a;
    b= +b;
}
void opoverloading :: operator!()
{
    a= !a;
    b= !b;
}
void opoverloading :: operator~()
{
    a= ~a;
    b= ~b;
}
int main()
{
    system("cls");
    opoverloading op1;
    op1.getdata(2,3);
    cout<<"calling operator -"<<endl;
    -op1;
    op1.display();

    opoverloading op2;
    op2.getdata(-2,-3);
    cout<<"Calling operator +"<<endl;
    +op2;
    op2.display();

    opoverloading op3;
    op3.getdata(0,1);
    cout<<"Calling operator !"<<endl;
    !op3;
    op3.display();

    opoverloading op4;
    op4.getdata(0,1);
    cout<<"Calling operator ~"<<endl;
    ~op4;
    op4.display();


    getch();
    return 0;
}