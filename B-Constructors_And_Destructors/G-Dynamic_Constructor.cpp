
//During creation of Objects We can allocate the memory of an object variables
#include<iostream>
#include<conio.h>
using namespace std;
class matrix
{
    private:
        int **p; //pointers to matrix
        int d1,d2;  // dimension
    public:
        matrix(int x,int y);
        void get_element(int i, int j, int value)
        {
            p[i][j]=value;
        }
        void display_elemnts()
        {
            cout<<"Elements Are: "<<endl;
             for(int i=0;i<d1;i++)
            {
                for(int j=0;j<d2;j++)
                {
                    cout<<p[i][j]<<" ";   
                }
                cout<<endl;
            }
        }
};

matrix :: matrix(int x,int y)
{
    int i;
    d1=x;
    d2=y;
    p=new int *[d1]; // This Will create an array of pointers and passed the address of first element to p
    for(i=0;i<d1;i++)
    {
        p[i]=new int [d2]; // At every location of p there will be an array of length d2(address of first elemnt of array)
    } 
}
int main()
{
    system("cls");
    int m,n,value;
    cout<<"Enter the Row and Column of the Array: "<<endl;
    cin>>m>>n;
    matrix array(m,n);
    
    // When object is created , constructor automatically allocates the memory for the 2d array

    cout<<"Enter the Elements Row By Row : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>value;
            array.get_element(i,j,value);
        }
    }
    array.display_elemnts();
    getch();
    return 0;
}