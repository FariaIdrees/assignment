#include<iostream>
using namespace std;
int doubleval(int &a)
{
    a=a*2;

}
int main()
{
 int c=8;
 cout<<"value="<<c<<endl;
 doubleval(c);
 cout<<"value="<<c<<endl;
 return 0;
}