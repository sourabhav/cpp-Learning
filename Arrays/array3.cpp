// Maximum element in the array

#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    int max;
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
    max = arr[0];
    for (int i=0;i<n;i++)
    {
        if (arr[i]>max)
            max=arr[i];
    }
    cout<<"\nMaximum element is the array is: "<<max;
    return 0;
}
