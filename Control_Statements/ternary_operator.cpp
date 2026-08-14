// condition? satement1(true) : statement2(false) ;

#include<iostream>
#include<string>
using namespace std;
int main(){
    int age;
    cout<<"enter age: "<<"\n";
    cin>>age;
    cout << ((age >=18) ? "valid voter\n" : "invalid voter\n");
    return 0;
}    