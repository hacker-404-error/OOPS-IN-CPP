
/*
 CONSTRUCTOR -  
 it is a special member function which is used to initialie the object of its class 
 it has same name as its class name
*/


#include<iostream>
#include<conio.h>
using namespace std;
class construct
{
    /*
    public:
    // should be declared inside public section
    construct(void) //same name as class name 
    {

    } */
};
int main()
{
    system("cls");
    // if constructor is not defined inside the class then compiler automatically calls default constructor
    construct a; // creating object and automatically calls constructor
    // name "construct"
    getch();
    return 0;
}