#include<iostream>
#include<conio.h>
using namespace std;

class classtobasic
{
    private:
        int hrs , mins;
    public:
        classtobasic(){ }
        classtobasic(int,int);
        // void display();
        operator int();   
        operator float();
};

classtobasic :: classtobasic(int hours , int minutes) 
{
    hrs=hours;
    mins=minutes;
}

classtobasic :: operator int()
{
    int duration;
    duration=(60*hrs)+mins;
    return duration;
}
classtobasic :: operator float()
{
    int Seconds;
    Seconds=(3600*hrs)+(60*mins);
    return Seconds;

}

int main()
{
    system("cls");
    int duration;
    float TotalSeconds;
    int hrs , mins;
    cout<<"Enter Total Hours : ";
    cin>>hrs;
    cout<<"Enter Total Minutes : ";
    cin>>mins;
    classtobasic time(hrs,mins);
    duration=time;
    TotalSeconds=time;
    cout<<"Total Duration Of Time Is : \n"<<duration<<" minutes\n";
    cout<<"OR\n";
    cout<<TotalSeconds<<" Seconds";
    getch();
    return 0;
}