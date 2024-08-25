#include <iostream>
using namespace std;
int main()
{
    char coin_flip;
    cout<<"enter the character"<<endl;
    cin>>coin_flip;
    while(coin_flip)
    { 
        cin>>coin_flip;
        if(coin_flip=='H')
        {
            cout<<"head"<<endl;
            break;
        }
        else if(coin_flip!='H' && coin_flip!='T')
        {
            cout<<"neither head nor tail.Coin is in the air"<<endl;
        }
        else if(coin_flip=='T')
        {
            cout<<"tail"<<endl;
        }
       else
       {
        cout<<"number is invalid"<<endl;
       }  
    }
    return 0;
}