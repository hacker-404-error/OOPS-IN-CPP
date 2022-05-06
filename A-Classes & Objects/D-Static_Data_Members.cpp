/*
STATIC DATA MEMBERS :
    1-It is initialized to zero when the firdt obj of class is created;
    2-only one copy is shared by all the objects
    3-its life time is the entire program and only visible inside the class
*/

#include <iostream>
#include <conio.h>
using namespace std;

class static_data
{
private:
    static int count; // Declaraing static data member
    int num;

public:
    void get(int a)
    {
        num = a;
        cout << a;
    }
    void count_static()
    {
        count++;
        cout << "\ncount = " << count;
    }
};

// this is defination of static dtata members

// Type and Scope of each Static member variable must be defined outside the class defination

int static_data ::count;

/*because they are not associated with objects they have their own memory.
and they are associated with the class , they are also called class variables*/

int main()
{
    system("cls");

    static_data ob1, ob2, ob3;
    cout << "\nobject 1: ";
    ob1.get(45);
    ob1.count_static();
    cout << endl;

    cout << "\nobject 2: ";
    ob2.get(54);
    ob2.count_static();
    cout << endl;

    cout << "\nobject 3: ";
    ob3.get(23);
    ob3.count_static();
    cout << endl;

    getch();
    return 0;
}

/* only one memory loation is assigned for count because it is static in nature and it also initialized
with 0 so when first time object a is being creadted

Object "ob1" has all the data members (count,num)
it increament the count with 1 and store value of num

when "obj2" is created then different memory location of num is created but same memory location of count
so when it try to increament the vlaue of count it increases to 2
similarly
obj3 increament the count to 3
*/