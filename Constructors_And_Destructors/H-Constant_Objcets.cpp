// CONSTANT OBJECTS: if objects declared constant then it cannot alter the values passed to it during 
// initialization using constructor. And it can only access to Constant member function.

#include<iostream>
#include<conio.h>
using namespace std;
class constOBJ
{
    private:
        int a,b;
    public:
        constOBJ(int,int);
        void display() const; // constant member function
};
constOBJ :: constOBJ(int x,int y)
{
    a=x;
    b=y;
}
void constOBJ:: display() const  //constant member function defination
{
    cout<<"\n"<<a<<"+"<<b<<"="<<a+b;
}
int main()
{
    int x,y;
    cout<<"\nenter first number : ";
    cin>>x;
    cout<<"\nenter second number : ";
    cin>>y;
    const constOBJ s(x,y);
    cout<<"\nvalue initialized "<<endl;
    s.display();
    //s.display(); ERROR : const objects can only access to the constact memebers function
    return 0;
}