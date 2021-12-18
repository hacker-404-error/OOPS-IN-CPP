/*CONSTRUCTOR WITH DEFAULT ARGUMENTS:
    Default argumrnts can be passed in constructor but it should be from right side to left side
    if some some value initialized with right variable uninitialized then compiler will generate error
    if no value is passed then only default value will be in use 
    otherwise passed value will be taken for further operation*/

#include<iostream>
#include<conio.h>
using namespace std;

class abc
{
    private:
        int a,b;
    public:
        abc(int ,int);
        void sum();
};
void abc:: sum()
{
    int s=0;
    s=a+b;
    cout<<"\n"<<a<<"+"<<b<<" = "<<s<<endl;
}
abc::abc(int x=5,int y=3)  //abc::abc(int x=5,y) gives error
{
    a=x;
    b=y;
}
int main()
{
    system("cls");
    cout<<"\ncalling constructor(passing no argument)";
    abc a;
    a.sum();
    cout<<"\ncalling constructor (passing single argument)";
    abc b(2);
    b.sum();
    cout<<"\ncalling constructor(passing all the argument)";
    abc c(2,4);
    c.sum();
    getch();
    return 0;
}