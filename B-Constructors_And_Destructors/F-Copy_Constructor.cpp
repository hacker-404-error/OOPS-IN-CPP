/*
COPY CONSTREUCTOR:
     constructor is refering same class objects in its argument.
    *with this we can copy the values or content of one object variable to another object  */


   #include<iostream>
   #include<conio.h>
    using namespace std;

    class hello
    {
        private:
            int a,b;
        public:
            hello(){ };
            hello(hello&);
            void displaysum();
            void getdata(int,int);
    };
    hello::hello(hello& ob1)
    {
        a=ob1.a;
        b=ob1.b;
    }
    void hello:: getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void hello:: displaysum()
    {
        cout<<"SUM: "<<a+b<<"\n";
    }
   int main()
   {
       system("cls");
       hello ob1;
       int x,y;
       cout<<"Enter number 1: "<<endl;
       cin>>x;
       cout<<"Enter number 2: "<<endl;
       cin>>y;
       ob1.getdata(x,y);
        ob1.displaysum();

        cout<<"\n\nCalling copy constructor "<<endl;
       hello ob2(ob1);
       ob2.displaysum();
       getch();
       return 0;
   }