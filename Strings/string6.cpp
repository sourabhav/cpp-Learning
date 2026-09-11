// strcat

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[20]= "hello";
    char str2[20]= "world";
    strcat(str,str2);

    cout<<str<<endl;
    return 0;
}