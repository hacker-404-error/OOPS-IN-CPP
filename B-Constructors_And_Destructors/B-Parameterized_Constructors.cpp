/*
PARAMETERIZED CONSTRUCTOR:
    Constructor can also have any number of parameter and of any type
    *Constructor cannt have its own class as a type in its parameter
    eg-class abc;
        abc(abc obj) //give you an error
    BUT 
    Can refer to other objects of same class
    eg-Class abc;
    abd(&abc) is allowed THIS IS ALSO CALLED AS COPY CONSTRUCTOR  
*/

#include<iostream>
#include<conio.h>
using namespace std;

class ABC
{
    private:
        int a,b,c;
    public:
    // declaration of constructors
        ABC()
        {
            a=0;
            b=0;
            c=0;
        }
        ABC(int,int,int);  //parameterized constructor
        void display();
};

ABC::ABC(int x,int y,int z) // defination of constructor
{
    a=x;
    b=y;
    c=z;
}
void ABC :: display()
{
 cout<<"\n"<<a<<"\n"<<b<<"\n"<<c;
}

int main()
{
    system("cls");
    ABC a; // calls default constructors
    ABC b(2,3,4); // calls parameterized constructor

    b.display();
    getch();
    return 0;
}