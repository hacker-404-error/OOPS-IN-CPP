#include<iostream>
using namespace std;
class second;
class first
{
    int x;
    public:
        void getdata(int a)
        {
            x=a;
        }
        friend void exchange(first &,second &);
        friend void display(first , second);

};

class second
{
    int y;
    public:
        void getdata(int a)
        {
            y=a;
        }
        friend void exchange(first &,second &);
        friend void display(first , second);

};

void exchange(first &a,second &b)
{
    int temp;
    temp=a.x;
    a.x=b.y;
    b.y=temp;
}

 void display(first a , second b) 
{
    cout<<"a = "<<a.x<<"\nb = "<<b.y;
}

int main()
{
    system("cls");
    first a;
    second b;
    int x,y;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;
    a.getdata(x);
    b.getdata(y);
    cout<<"Before exchanging : "<<endl;
    display(a,b);
    exchange(a,b);
    cout<<"\nAfter exchange : "<<endl;
    display(a,b);
    return 0;
}