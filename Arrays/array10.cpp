// max and min elements in 2D array

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
        int min=arr[0][0];
        int max=arr[0][0];

        for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (arr[i][j] > max){
                max=arr[i][j];
            }
            if (arr[i][j] < min) {
                min == arr[i][j];
            }
        }
        }
        cout<<endl;
    cout<<"Maximum element: "<<max;
    cout<<"\nMinimum element: "<<min;
    return 0;
}