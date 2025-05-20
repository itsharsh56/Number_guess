#include<iostream>

using namespace std;

int main()
{
    int n,guessno,count=0;
    cout<<"****************************** Number gussing game ***************************************"<<endl;
    cout<<"this is going to be fun"<<endl;
    cout<<"thw number is between 1 to 100"<<endl<<endl;
    srand(time(NULL));
    n=rand()%100+1;
    //cout<<n<<endl;
    do
    {
        cout<<"enter the player number "<<endl;
        cin>>guessno;
        if (n<guessno)
        {
        cout<<"Lower number please "<<endl;
        count=count+1; 
        }
    else if (n>guessno)
        {
        cout<<"Higher number please "<<endl;
        count=count+1;
        }
    if (n==guessno)
        {
        cout<<"Congratulation you guessed it right "<<endl;
        count=count+1;
        }
    
    } while (n!=guessno);
    cout<<"the number of chances taken :"<<count<<endl;
    cout<<"the number is :"<<n<<endl;
    return 0;
}
