#include <iostream>
using namespace std;
bool isEven(int x)
{
    return x %2==0;
}
int main()
{
int number;
cout<<"Enter your number:"<<endl;
cin>>number;
if (isEven(number))
{
    cout<<"True"<<endl;
}
else
{
    cout<<"False"<<endl;
}
return 0;
}