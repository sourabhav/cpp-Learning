// Bubble_Sort

#include<iostream>
using namespace std;
int main(){

    int n,arr[100],temp;

    cout<<"enter the size of the array: "<<"\n";
    cin>>n;
    cout<<"enter the elements: "<<"\n";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array is: "<<"\n";
    for (int i=0;i<n;i++)
    {
        cout<< arr[i] <<" ";
    }

    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
cout<<"sorted array: "<<"\n";
for (int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}