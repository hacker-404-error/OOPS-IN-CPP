/*
FRIEND FUNCTION:
	A non member function is not alloed to access private data members
	BUT IT IS POSSIBLE USING FRIEND FUNCTION
	Friend function is not in the scope of the class , so it can be invoked like normal
	function
	*/

#include <iostream>
#include <conio.h>
using namespace std;

class B; // forward declaration of class B
class A
{
	int value;

public:
	void getdata(int x)
	{
		value = x;
	}
	friend void sum(A, B); // declaring friend function
};

class B
{
	int value;

public:
	void getdata(int y)
	{
		value = y;
	}
	friend void sum(A, B); // declaring friend function
};

void sum(A a, B b) // friend function definition
{
	cout << "sum is " << a.value + b.value; // we can access the Private (Value) part in Friend Function with the help of Objects. 
}

int main()
{
	system("cls");
	A a;
	B b;
	int x, y;
	cout << "enter first number : " << endl;
	cin >> x;
	cout << "enter second number : " << endl;
	cin >> y;
	a.getdata(x);
	b.getdata(y);
	sum(a, b);
	getch();
	return 0;
}