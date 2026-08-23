// Declaring, initialisation and printing an array

#include<iostream>
using namespace std;
int main(){
    int n,a[100];
    cout<<"enter the size of the array: "<<"\n";
    cin>>n;
    cout<<"enter the elements: "<<"\n";
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array is : "<<"\n";
    for (int i=0;i<n;i++)
    {
        cout<< a[i] <<" ";
    }

    return 0;
}