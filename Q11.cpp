//C++ Program to Find Factorial
#include <iostream>
using namespace std;
int factorial(int x);
int main()
{
    int a;
    cin>>a;
    cout<<factorial(a)<<endl;
    return 0;
}
    int factorial(int x)
{
    if(x<2)
        return 1;
    else
     return x*factorial(x-1);
}
