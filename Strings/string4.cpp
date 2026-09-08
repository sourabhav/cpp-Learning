// Size using strlen()

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[100];

    cout<<"Enter a string: ";
    cin.getline(str,100);

    cout<<"Size: "<< strlen(str) <<endl;
    return 0;
}