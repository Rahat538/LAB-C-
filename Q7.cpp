//C++ Program to Find Largest Number Among Three Numbers
#include <iostream>
using namespace std;
int main()
{
    int i;
    int numbers[3];
    cout << "Enter three numbers"<<endl;
    for(i=0;i<3;i++)
    cin>>numbers[i];
    int max=numbers[0];
    for(i=1;i<3;i++)
    {
         if(max<numbers[i])
            max=numbers[i];
    }
       cout<<"The largest number is: "<<max<<endl;

    return 0;
}
