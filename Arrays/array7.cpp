// 2D arrays

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
    
        cout<<"2-D array is: "<<"\n";
        for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<arr[n][m]<<" ";
        }
        }
        

        cout<<endl;
    
    return 0;
}