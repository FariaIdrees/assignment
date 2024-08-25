#include<iostream>
using namespace std;
int main()
{
    char ch=0;
    cout<<"enter the character"<<endl;
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') 
    {
        cout<< "The character is vowel"<<endl;
    }
    else {
        cout<<"The character is'nt vowel"<<endl;
    }
    return 0;
}