// WHILE LOOP

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"enter number:"<<"\n";
    cin>>n;
    int sum=0;
    while(n>0){
        int lastdigit = n%10;
        sum+=lastdigit;
        n/=10;
    }
    cout<<"sum="<<sum<<"\n";
    return 0;
}