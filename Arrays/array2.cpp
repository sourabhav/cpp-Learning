// Sum of elements in the array

#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    int sum=0;
    cout<<"enter the size of the array: "<<"\n";
    cin>>n;
    cout<<"enter the elements: "<<"\n";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array is : "<<"\n";
    for (int i=0;i<n;i++)
    {
        cout<< arr[i] <<" ";
    }
    for (int i=0; i<n; i++)
    {
        sum= sum+arr[i];
    }
    cout<<"\nsum of the elements in the array: "<<sum<<"\n";
    return 0;
}