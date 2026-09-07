// C-style

#include<iostream>
using namespace std;

int main(){
    char str[10];

    cout<<"Enter a string: ";
    //space
    cin.getline(str,100);
    cout<<str<<endl;
    return 0;
}