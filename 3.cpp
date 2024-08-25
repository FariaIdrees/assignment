#include<iostream>
using namespace std;
int main()
{
    int num=0;
    cout<<"enter the number" <<endl;
    cin>>num;
    if(num %2==0)
    {
        cout<<"number is divisible by 2"<<endl;
    }
    else{ 
        cout<<"number is'nt divisible by 2"<<endl;
    }
    return 0;
}