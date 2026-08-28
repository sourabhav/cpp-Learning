// Even and odd elements

#include <iostream>
using namespace std;
int main()
{
    int n, arr[100];
    int even_ = 0, odd_ = 0;
    cout << "enter the size of the array: " << "\n";
    cin >> n;
    cout << "enter the elements: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array is : " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even_++;
        else
            odd_++;
    }
    cout << "\nEven elements: " << even_ << "\n";
    cout << "Odd elements: " << odd_ << "\n";
    return 0;
}
