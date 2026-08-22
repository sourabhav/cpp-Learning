#include<iostream>
using namespace std;

//Function definition
void swapNo(int a,int b);
int main()
{
    int a=10,b=20;
    cout<<"Before swapping: \n";
    cout<<"a="<<a<<"\n";
    cout<<"b="<<b<<"\n";
    swapNo(a,b);   //Calling function
    return 0;
}
void swapNo(int a , int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"After swapping: \n";
    cout<<"a="<<a<<"\n";
    cout<<"b="<<b<<"\n";
}