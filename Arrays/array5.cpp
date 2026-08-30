// Binary_Search

#include<iostream>
using namespace std;
int main(){

    int n,arr[100],ele, mid,start,end;

    cout<<"enter the size of the array: "<<"\n";
    cin>>n;
    cout<<"enter the elements in sorted manner for binary search: "<<"\n";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array is : "<<"\n";
    for (int i=0;i<n;i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<"\nEnter the element to search: "<<"\n";
    cin>>ele;

    start=0;
    end=n-1;

    while(start <= end)
    {
        mid= (start+end)/2;
        if (arr[mid] == ele)
        {
            cout<<"Element is found at the position: "<<mid+1;
            return 0;
        }
    else if(arr[mid]<ele)
    {
        start= mid+1;
    }
    else
    {
        end= mid-1;

    }
}
    cout<<"Element not found";
    return 0;
}