/*
ARRAY WITH IN CLASS:
    We can create data member of a class as array of elements
    can be declared in private or public section
 */

#include<iostream>
#include<conio.h>
using namespace std;

class array_members
{
    private:
        int a[10];  //array of 10 integers
        int n;
    public:
        void get_elements();
        void display_elements();
        int sum_of_elements();
};

int array_members :: sum_of_elements()
{
    int sum=0;
    for(int i=0;i<n;i++)
    { 
        sum=sum+a[i];
    }
    return sum;

}
void array_members :: get_elements()
{
    cout<<"enter the number of elements : ";
    cin>>n;
    cout<<"enter the elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void array_members :: display_elements()
{
    cout<<"sum of the elements is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"+"<<a[i];
    }
    int s=sum_of_elements();
    cout<<" = "<<s;
}

int main()
{
    system("cls");
    array_members ob1;
    ob1.get_elements();
    ob1.display_elements();
    
    getch();
    return 0;
}