#include<iostream>
#include<string>
using namespace std;

int main(){
    int num1,num2,temp;
    cout<<"enter num1: ";
    cin>>num1;
    cout<<"enter num2: ";
    cin>>num2;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"after swapping"<<endl;
    cout<<"num1:"<<num1<<endl;
    cout<<"num2:"<<num2<<endl;
    return 0;
}