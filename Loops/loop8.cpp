// RANDOM - DO WHILE LOOP

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    int guess=0;

    srand(time(0));
    int n=rand()%10+1;
    cout<<n<<"\n";

    do{
        cout<<"guess the number:"<<"\n";
        cin>>guess;
        if (guess>n)
            cout<<"guess is high"<<"\n";
        else if (guess<n)
            cout<<"guess is less"<<"\n";
        else
            cout<<"guess is correct!"<<"\n";
    }
    while(guess != n);
        
    return 0;
}