//C++ Program to Check Leap Year
#include <iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if((year%4==0 and year%100!=0) or year%400==0)
        cout<<"Leap Year"<<endl;
    else
        cout<<"!Leap year"<<endl;

    return 0;
}

