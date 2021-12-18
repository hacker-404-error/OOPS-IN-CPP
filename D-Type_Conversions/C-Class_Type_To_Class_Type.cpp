#include<iostream>
#include<conio.h>
using namespace std;

class time
{
    private:
        int duration;
    public:
        time(){ }
        time(int); 
        int get_time();
};

int time :: get_time()
{
    return duration;
}

time :: time(int dur)
{
    duration=dur;
}

class Hrs_Mins
{ 
    public:
        int hrs;
        int mins;
    public:
        void display();
        Hrs_Mins operator=(time);   
};
void Hrs_Mins :: display()
{
     cout<<"time: "<<hrs<<"hours : "<<mins<<" mins";
}

Hrs_Mins Hrs_Mins :: operator=(time t1)
{
    
    hrs=(t1.get_time()/60);
    mins=(t1.get_time()%60);
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
