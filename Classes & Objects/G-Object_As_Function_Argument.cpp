/*OBJECT AS FUNCTION ARGUMENT
    We want to use class data type(user defined data type) as a built in data type
    so what ever the operation a built in data type can posses,we want all those same 
    operation can be done in user defined data type
    
    # we can pass the objects as function argument as same as built in datatype
    #object can be passed by value of by reference

    If passed by value:
         then a whole copy of object is passed to the function and whatever 
    the operation we will done will not be be reflected to the real object

    If passed by reference:
         then whatever the operation we will done using this reference is
    actually reflected to the real object*/

#include<iostream>
#include<conio.h>
using namespace std;

class data
{
    private:
        int i;
        int j;
    public:
    void getdata();
    void display();
    void add(data,data);
};
void data :: getdata()
{
    cout<<"\nEnter Real part : ";
    cin>>i;
    cout<<"Enter Imaginary part : ";
    cin>>j;

}

void data:: display()
{
    cout<<"\n sum of two complex number is :"<<i<<"+"<<j<<"j";
}
void data:: add(data a,data b)
{
    i=a.i+b.i;
    j=a.j+b.j;    
}

int main()
{

    system("cls");
    data ob1,ob2,ob3;
    cout<<"Enter complex number 1: ";
    ob1.getdata();
    cout<<"\n\nEnter complex number 2: ";
    ob2.getdata();
    ob3.add(ob1,ob2); //passing object to member function
    ob3.display();
    getch();
    return 0;

}