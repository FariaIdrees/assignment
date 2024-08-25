#include<iostream>
#include <string>
using namespace std;
int main()
{
    string str="Exhausted";
    string rev_str="";
    for(int i=str.length()-1;i>=0;--i )
    {
        rev_str += str[i];
    }
    cout<<"the reverse string:"<<rev_str<<endl;
    return 0;
}