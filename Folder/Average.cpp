#include<iostream>
using namespace std;
float average(float a,float b,float c) 
{
float average =a+b+c/3;
return average;
}
int main()
{
float x=5.9;
float y=8.9;
float z=7.4;
cout<< average(x,y,z)<<endl;
return 0;
}