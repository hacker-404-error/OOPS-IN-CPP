/* 
RETURNING OBJECTS FROM FUNCTION:
    We want to use class data type(user defined data type) as a built in data type
    so what ever the operation a built in data type can posses,we want all those same 
    operation can be done in user defined data type
    
    # we can return the object from function as same as built in datatype

    Note: certain critera must be satisfied like:
        1- return type of function must of class data type
        2- there must be another object of type class which can hold the returned object
 */

#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    int i,j;
    public:
        void get(int ,int);
        friend complex sum(complex,complex);
        void display();
};

void complex:: get(int x, int y)
{
    i=x;
    j=y;
}

complex sum(complex c1,complex c2)
{
    complex c;
    c.i=c1.i+c2.i;
    c.j=c1.j+c2.j;
    return c;
}
void complex:: display()
{
    cout<<i<<"+"<<j<<"i";
}
int main()
{
    system("cls");
    complex c1,c2,c3;
    int x,y;
    cout<<"Enter complex number 1:\n";    
    cout<<"Enter Real part: ";
    cin>>x;
    cout<<"Enter Imaginary part: ";
    cin>>y;
    c1.get(x,y);

    cout<<"\n\nEnter complex number 2:\n";
    cout<<"Enter Real part: ";
    cin>>x;
    cout<<"Enter Imaginary part: ";
    cin>>y;
    c2.get(x,y);

    c3=sum(c1,c2);
    cout<<"\nA=";
    c1.display();
    cout<<"\nB=";
    c2.display();
    cout<<"\nA+B=";
    c3.display();
    getch();
    return 0;
}