#include<iostream>
using namespace std;
void increase(int &x)
{
 x++;

}
int main()

{
int a=15;
cout<<a<<endl;
increase(a);
cout<< a <<endl;
return 0;
}