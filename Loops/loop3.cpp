// FOR LOOP

#include<iostream>
#include<string>
using namespace std;
int main(){
    int fact,n;
    cout<<"enter thr number:\n";
    cin>>n;
    fact=1;
    for (int i=1;i<=n;i++)
    {
        fact *= 1;
    }
    cout<<"factorial:\n"<<fact;

    return 0;
}