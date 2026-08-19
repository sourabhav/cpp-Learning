// ARMSTRONG NUMBER

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int c=0,copy=0,sum=0;
    cout<<"enter number to be checked: "<<"\n";
    cin>>n;
    while(n>0){
        c++;
        n/=10;
    }
    n=copy;
    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,c);
        n/=10;
    }
    cout<<((sum==n) ? "Armstrong number\n" : "Not armsrtong number\n");
    return 0;
}