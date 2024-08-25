#include<iostream>
using namespace std;
void swapnumbers(int &x,int &y)
{
   int temp=x;
    x=y;
    y=temp;
}

int main()
{
    int n1,n2;
int a=4;
int b=9;
cout<<"before swap:a="<<a<<endl;
cout<<"before swap:b="<<b<<endl;
swapnumbers(a,b);
cout<<"after swap:a="<<a<<endl;
cout<<"after swap:b="<<b<<endl;
return 0;
}