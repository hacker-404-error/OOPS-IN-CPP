/*
COONSTRUCTOR OVERLOADING:
    as per the number of arguments ,Compiler calls constructor 
    it means same constructor will do different work depending
    upon the no of arguments*/

#include<iostream>
#include<conio.h>
using namespace std;

class abc
{
    private:
        int a,b;
    public:
        abc()
        {
            a=0;
            b=0;
        }
        abc(int);
        abc(int ,int);
        void sum();
};
void abc:: sum()
{
    int s=0;
    s=a+b;
    cout<<"\n"<<a<<"+"<<b<<" = "<<s<<endl;
}
abc::abc(int x)
{
    a=x;
    b=x;
}
abc::abc(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    system("cls");
    cout<<"\ncalling default constructor";
    abc a;
    a.sum();
    cout<<"\ncalling single parameter constructor";
    abc b(2);
    b.sum();
    cout<<"\ncalling double parameter constructor";
    abc c(2,3);
    c.sum();
    getch();
    return 0;
}