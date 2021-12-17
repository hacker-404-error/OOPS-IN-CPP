/*
POINTER TO MEMBERS OF CLASS:
We can point(storing address of) data members and member function of class using pointer
*/



#include<iostream>
#include<conio.h>
using namespace std;
class abc
{
        private:
            int a,b;
        public:
            void get(int ,int);
            friend int sum(abc);
};

void abc:: get(int x, int y)
{
    a=x;
    b=y;
}

int sum(abc obj)
{
    // pointer to data members 
    // int *ptr=&a will not work
    int abc :: *ptr1=&abc :: a;
    int abc :: *ptr2=&abc :: b;
    
    // return(obj.*ptr1+obj.*ptr2); This can be used for the sum operation

    abc*objptr=&obj;
    return(objptr->*ptr1 + obj.*ptr2); //accessing data members using pointer to object

}




int main()
{
    system("cls");
    abc a;
    int x,y;
    cout<<"enter the value 1: "<<endl;
    cin>>x;
    cout<<"enter the value 2: "<<endl;
    cin>>y;

/****************************************************************************************/
   
    // void *p(int,int)=&get; we cannot initialize pointer to member function of class like this
    
    void (abc:: *p)(int,int)=&abc::get; // pointer to member function

    //object "a" calling member function using pointer
    (a.*p)(x,y);
    cout<<"SUM: "<<sum(a);

/****************************************************************************************/
    cout<<endl;
    cout<<"enter the value 1: "<<endl;
    cin>>x;
    cout<<"enter the value 2: "<<endl;
    cin>>y;

    // Creating pointer to object
    abc*ob2=&a;
    //Calling get funtion using pointer to object
    (ob2->*p)(x,y);
    cout<<"SUM: "<<sum(a);


    getch();
    return 0;
}