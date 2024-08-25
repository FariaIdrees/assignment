#include<iostream>
using namespace std;
int main()
{
    int num1=0;
    int num2=0;
    char opr;
    cout<<"Enter the number 1"<<endl;
    cin>>num1;
    cout<<"Enter the number 2"<<endl;
    cin>>num2;
    cout<<"enter your operator"<<endl;
    cin>>opr;
    switch(opr)
    {
    case '+':
       int add;
      add=num1+num2;
      cout<<"Addition ="<<add<<endl;
    break;
    
    case '-':
        int sub;
        sub=num1-num2;
        cout<<"substraction ="<<sub<<endl;
        break;
    case '*':
        int mul;
        mul=num1*num2;
        cout<<"Multiplication  ="<<mul<<endl;
        break;
    case '/':
        int div;
        div=num1 / num2;
        cout<<"division  ="<<div<<endl;
        break;
    
     default:
     cout<<"operator is'nt correct"<<endl;
    }
    
}