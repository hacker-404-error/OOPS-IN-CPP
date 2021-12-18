//DESTRUCTORS: Is used to destroy the objects so that the memory taken
// by the objects will get released

// Destructor never takes any argument andcall implicitly without calling it
// It destroy the objects in LIFO: last created object will get destroy first

#include<iostream>
#include<conio.h>
using namespace std;

int count=0;
class alpha
{
    public:
    alpha()
    {
        count++;
        cout<<"\nNo. of objects created "<<count;
    }
    ~alpha()
    {
        cout<<"\nObject "<<count<<" Deleted";
        count--;
    }
};
int main()
{
    system("cls");
    alpha a1;
    alpha a2;
    alpha a3;
    alpha a4;
    {
        cout<<"\n\nEnter Into The Block 1:\n";
        alpha a5;
    }

    {
        cout<<"\n\nEnter Into The Block 2:\n";
        alpha a6;
    }

    cout<<"\n\nRE-ENTER INTO MAIN:\n";
    return 0;
}