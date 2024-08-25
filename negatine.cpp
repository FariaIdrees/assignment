#include <iostream>
using namespace std;
int main()
{
    int number=0;
    int user_input=0;
    while(user_input>=number)
    {
        cin>>user_input;
        if(user_input<0)
        {
            cout<<"The number is negative."<<endl;
            break;
        }
        else if(user_input==0)
        {
            cout<<"The number is neither positive and nor negative"<<endl;
        }
        else  
        {
            cout<<"The number is positive."<<endl;
             user_input++;
        }
    }
    return 0;
}
