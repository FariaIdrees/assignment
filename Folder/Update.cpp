#include <iostream>
using namespace std;
int updateval(int &x,int &y)
{
    int sum=x+y;
    int sub=x-y;
    x=sum;
    y=sub;
}
int main()
{
    int value1=16;
    int value2= 30;
    cout<<"the valuue before updating:"<<value1<<endl;
    cout<<"the valuue before updatin:"<<value2<<endl;
    updateval(value1,value2);
    cout<<"the updated value:"<<value1<<endl;
    cout<<"the updated value:"<<value2<<endl;
    return 0;
}