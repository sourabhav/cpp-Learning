// Declaration and initialisation of String

#include<iostream>
using namespace std;

int main(){
    char name[10];
    char name2[10]= { 'G','o','l','u','\0'};
    char name3[]={ 'G','o','l','u','\0'};
    char name4[]= "Golu";

    cout<<name2<<endl;
    cout<<name3<<endl;
    cout<<name4<<endl;
    return 0;
}