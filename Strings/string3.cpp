// Size of a string

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[100];

    cout<<"Enter a string: ";
    cin.getline(str,100);
    cout<<str<<endl;

    int size=0;
    for (int i=0;str[i]!='\0';i++) {
        size ++;
    }
    cout<<"Size: "<<size<<endl;
    return 0;
}