#include<iostream>
#include<conio.h>
using namespace std;

class Hrs_Mins;  //Forward Declaration

class time
{
    private:
        int duration;
    public:
        time(){ }
        time(int);
        operator Hrs_Mins();    
};

time :: time(int dur)
{
    duration=dur;
}
time :: operator Hrs_Mins()
{
    Hrs_Mins temp;
    temp.hrs=(duration/60);
    temp.mins=(duration%60);
    return temp;
}
class Hrs_Mins
{
    public:
        int hrs;
        int mins;
    public:
        void display();
};
void Hrs_Mins :: display()
{
     cout<<"time: "<<hrs<<"hours : "<<mins<<" mins";
}
int main()
{
    system("cls");
    int duration;
    cout<<"Enter the Duration Of Time : ";
    cin>>duration;
    time Time(duration);
    Hrs_Mins InHrs_Mins;
    InHrs_Mins=Time;
    InHrs_Mins.display();
    getch();
    return 0;
}