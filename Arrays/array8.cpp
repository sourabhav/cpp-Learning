// Sum of elements of 2D Array

#include<iostream>
using namespace std;
int main(){

    int n,m;

    cout<<"Enter number of rows(n): "<<"\n";
    cin>>n;
    cout<<"Enter number of columns(m): "<<"\n";
    cin>>m;

    int arr[n][m];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"Enter the 2-D array elements of arr[" << i << "][" << j << "] = ";
            cin>>arr[n][m];
        }
        

        cout<<endl;
    }
        int sum=0;
        for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            sum += arr[n][m];
        }
        cout<<endl;
        }
    cout<<"Sum of Elements: "<<sum;
    
    return 0;
}