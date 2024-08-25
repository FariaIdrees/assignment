#include<iostream>
#include <string>
using namespace std;
int main()
{
    string str="hello world";
    int count=0;
    for(int i=0; i< str.length(); ++i)
    {
        count ++;
    }
    cout<<"characters:"<<count<<endl;
    return 0;
}