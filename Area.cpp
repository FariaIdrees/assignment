#include<iostream>
using namespace std;
float calArea(float length,float width)
{
    float area =length* width;
    return area;
}
int main()
{
float w=20;
float l=16;
cout<<calArea(w,l)<<endl;
return 0;
}