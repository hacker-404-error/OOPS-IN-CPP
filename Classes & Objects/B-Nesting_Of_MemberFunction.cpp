/*
NESTING OF MEMBER FUNCTION:
    Normally member function of one class can only be called using objects of that class
    but we can call member function directly by its name inside another member function 
    THIS IS CALLED NESTING OF MEMBER FUNCTION.
*/


#include<iostream>
#include<conio.h>
using namespace std;
class nesting
{
    private:
    int a;
    int b;
    public:
    
    //defination of member function inside the class defination
    void input(int x, int y)
    {
        a=x;
        b=y;
    }
    //declaration
    void display();
    int largest();

};

//defination of member functions outside thr class defination
int nesting :: largest()
{
    if(a>b)
    return a;
    else
    return b;
}

void nesting ::  display()
{
    cout<<"larger number is "<<largest();   //nesting of member function 
}

int main()
{
    system("cls");
    nesting x;
    int a,b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"Enter number 2 : ";
    cin>>b;
    x.input(a,b);
    x.display();

    getch();
    return 0;
}