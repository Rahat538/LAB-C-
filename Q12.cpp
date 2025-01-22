//C++ Program to Generate Multiplication Table
#include<iostream>
using namespace std;
int table (int x);
int main()
{
    int num;
    cin>>num;
    table(num);
    return 0;
}
int table (int x)
{
    int i;
    for (i=1;i<=10;i++)
    {
        cout<< x << " * " << i<<" = "<<x*i<<endl;
    }
}
