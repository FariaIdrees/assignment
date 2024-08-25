#include <iostream>
using namespace std;
int main()
{
    int marks=0;
    char grades;
    cout<<"enter number"<<endl;
    cin>>marks;
    switch (marks/10)
    {
    case 10:
    case 9:
    grades= 'A';
        break;
    case 8:
    grades='B';
    break;
    case 7:
    grades='C';
    break;
    case 6: 
    grades='D';
    break;
    default:
    grades='F';
     break;
    }
    cout<< "the grade is:"<<grades<<endl;
    return 0;
}