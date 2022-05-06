#include <iostream>
#include <conio.h>
using namespace std;

class Member_Inline
{
private:
    int a;
    int b;

public:
    void get() // this function is by default inlinr function
    {
        cout << "Enter Number1: ";
        cin >> a;
        cout << "Enter Number2: ";
        cin >> b;
    }
    void sum();
};
/*Making an outside function Inline*/
inline void Member_Inline::sum() // sum() is not by default inline function, explicitly we need to specify the inline
{
    cout << "\n\nSum of two Numbers is: " << a + b;
}
int main()
{
    system("cls");
    Member_Inline ml;
    ml.get();
    ml.sum();
    getch();
    return 0;
}