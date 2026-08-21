#include <iostream>
using namespace std;

// Function Declaration
void printHello();
int sum(int a, int b);
int add(int a = 10, int b = 20);   // Default arguments

int main()
{
    printHello();

    int ans1 = sum(7, 8);
    cout << "Sum = " << ans1 << "\n";

    int ans2 = add(5);
    cout << "Sum using default argument = " << ans2 << "\n";

    return 0;
}

// Function Definition
void printHello()
{
    cout << "Hello!!\n";
}

// Function with arguments,return value
int sum(int a, int b)
{
    return a + b;
}

// Function with default arguments
int add(int a, int b)
{
    return a + b;
}