// FOR LOOP

#include<iostream>
#include<string>
using namespace std;
int main(){
    int sum,n;
    cout<<"enter the number:\n";
    cin>>n;
    sum=0;
    for (int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum<<"\n";
    return 0;
}