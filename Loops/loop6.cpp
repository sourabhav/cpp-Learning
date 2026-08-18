// PALINDROME NUMBER

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number to be checked: "<<"\n";
    cin>>n;
    int rev=0;
    int copy=n;
    while(n>0){
        int lastdigit = n%10;
        rev= rev*10 + lastdigit;
        n/=10;
    }
    cout<<((rev==copy)? "Palindrome number\n" : "Not palindrome number\n");

    return 0;
}