// Sum of primary and secondary diagonal elements

#include <iostream>
using namespace std;
int main()
{

    int n, m;

    cout << "Enter number of rows(n): " << "\n";
    cin >> n;
    cout << "Enter number of columns(m): " << "\n";
    cin >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter the 2-D array elements of arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }

        cout << endl;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || (i + j) == n - 1)
                sum += arr[n][m];
        }
        cout << endl;
    }
    cout << "Sum of diagonal elements: " << sum;

    return 0;
}