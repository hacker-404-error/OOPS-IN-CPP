/*
STATIC MEMBER FUNCTION:

1- A STATIC MEMBER FUNCTION CAN ACCESS ONLY TO STATIC MEMBERS(FUNCTIONS OR VARIALES)
2- THEY CAN ALSO BE CALLED USING CLASS NAME (NOT WITH OBJECTS )
 Eg- class_name :: function_name
 */

#include<iostream>
#include<conio.h>
using namespace std;
class stat_memf
{
    private:
    //static data members
        static int a;
        static int b;
        static int s;
    public:
        void get(int ,int);
        // static member function
        static void sum()
        {
             // can only access static variables
            s=a+b;
            cout<<"\nsum : "<<s;
        } 
};

int stat_memf :: a;
int stat_memf :: b;
int stat_memf :: s;

void stat_memf :: get(int x, int y)
{
    a=x;
    b=y;
}

// void stat_memf :: sum()
// {
//     // can only access static variables
//     s=a+b;
//     cout<<"\nsum : "<<s;
    
// }


int main()
{
    system("cls");
    stat_memf z;
    int x;
    int y;
    cout<<"Enter 1st number  : ";
    cin>>x;
    cout<<"Enter 2nd number  : ";
    cin>>y;
    z.get(x,y);
    // z.sum();
    stat_memf :: sum();  // calling static member function
    getch();
    return 0;
}