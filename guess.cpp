#include <iostream>
using namespace std;
int main()
{
    int number=5;
    int user_guess=0;
    while(user_guess!=number)
    {
        cin>>user_guess;
        if(user_guess < 1 || user_guess > 10) 
        {
            cout<<"Please guess the number between 1 to 10"<<endl;
        }
        else if(user_guess < 4){
            cout<<"The number is very low.Try it again!"<<endl;
        }
        else if(user_guess > 7){
            cout<<"The number is very high. Try it again!"<<endl;
        }
        else {
            cout<<"Congratulations!You got it"<<endl;
        }
    }
    return 0;
}