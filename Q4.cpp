//C++ Program to Swap Two Numbers
#include<iostream>
using namespace std;
void swapNum(int &x,int &y);
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl<<endl;
    cin>>a>>b;
    swapNum(a,b);
    cout<<"Reverse numbers are: "<<endl<<a<<endl<<b<<endl;
    return 0;
}
void swapNum(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
