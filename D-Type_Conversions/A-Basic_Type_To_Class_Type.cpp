#include<iostream>
#include<conio.h>
using namespace std;

class BasicTOClass
{
    private:
        int hrs;
        int mins;
    public:
        BasicTOClass(){ }
        BasicTOClass(int duration);
        void display();
};

BasicTOClass :: BasicTOClass(int duration)
{
    hrs = duration / 60;
    mins = duration % 60;

}

void BasicTOClass :: display()
{
    cout<<"time: "<<hrs<<"hours : "<<mins<<" mins";

}
int main()
{
    system("cls");

    BasicTOClass time1;
    int duration;
    cout<<"enter the duration : "<<endl;
    cin>>duration;
    time1=duration;
    time1.display();
    getch();
    return 0;
}