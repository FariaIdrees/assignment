#include<iostream>
using namespace std;
void maxarray(int array[4])
{
    array[2]=18;
}
void print(int arr[4])
{
    for (int i = 0; i<4; i++)
    {
        cout<<arr[i]<<"  ";
    }
   cout<<endl; 
}
int main()
{
int arr[4]={1,2,3,4};
print (arr);
maxarray(arr);
print (arr);
return 0;
}