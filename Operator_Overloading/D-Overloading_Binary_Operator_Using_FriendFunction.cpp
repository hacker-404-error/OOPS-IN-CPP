#include<iostream>
#include<conio.h>
using namespace std;

class binoperator
{
    private:
        float a;
    public:
        void getdata(float);
        void display();
        friend binoperator  operator+(binoperator,binoperator);
        friend binoperator  operator-(binoperator,binoperator);
        friend binoperator  operator*(binoperator,binoperator);
        friend binoperator  operator/(binoperator,binoperator);
};
void binoperator :: getdata(float x)
{
    a=x;
}
void binoperator :: display()
{
    cout<<" "<<a<<"\n\n";
}
binoperator operator+(binoperator op1,binoperator op2)
{
    binoperator op3;
    op3.a=op1.a+op2.a;
    return(op3);

}
binoperator operator-(binoperator op1,binoperator op2)
{
    binoperator op3;
    op3.a=op1.a-op2.a;
    return(op3);

}
binoperator operator*(binoperator op1,binoperator op2)
{
    binoperator op3;
    op3.a=op1.a*op2.a;
    return(op3);

}
binoperator operator/(binoperator op1,binoperator op2)
{
    binoperator op3;
    op3.a=op1.a/op2.a;
    return(op3);

}
int main()
{
    system("cls");
    binoperator op1,op2,op3;
    float x;
    cout<<"enter number for object1: "<<endl;
    cin>>x;
    op1.getdata(x);
    cout<<"Enter number for object2: "<<endl;
    cin>>x;
    op2.getdata(x);

    cout<<"callimg + operator :";
    op3=op1+op2;
    op3.display();
    cout<<"callimg - operator :";
    op3=op1-op2;
    op3.display();
    cout<<"callimg * operator :";
    op3=op1*op2;
    op3.display();
    cout<<"callimg / operator :";
    op3=op1/op2;
    op3.display();
    return 0;
}