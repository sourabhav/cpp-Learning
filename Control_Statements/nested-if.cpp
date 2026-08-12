#include<iostream>
#include<string>
using namespace std;
int main(){

    int a,b,c;
    cout<<"Enter a: "<<"\n";
    cin>>a;
    cout<<"Enter b: "<<"\n";
    cin>>b;
    cout<<"Enter c: "<<"\n";
    cin>>c;
    if (a>b){
        if (a>c)
            cout<<a<<" is greater"<<endl;
        else
            cout<<c<<" is greater"<<endl;
    } else {
        if (b>c)
            cout<<b<<" is greater"<<endl;
        else
            cout<<c<<" is greater"<<endl;         
        
        }
        
    return 0;
}