//C++ Program to Display Fibonacci Seris
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    long long int fib[n];
    fib[0]=0;
    fib[1]=1;
    cout<< fib[0]<<' '<< fib[1]<<' ';
    for(i=2;i<n;i++)
    {
       fib[i]=fib[i-1]+fib[i-2];
       cout<<fib[i]<<' ';
    }

 return 0;
}
