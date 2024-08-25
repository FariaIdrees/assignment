#include <iostream>
using namespace std;
int findMin(int a,int b,int c)
{
    int minval=b;
    if(a<minval)
    {
        minval=a;
    }
    if(c<minval)
    {
        minval=c;
    }
    return minval;
}
int main()
{
    int val1= 5;
    int val2= 3;
    int val3= 7;
    int smallerval=findMin(val1,val2,val3);
    cout<<"the smaller value is:"<<smallerval<<endl;
    return 0;

}
