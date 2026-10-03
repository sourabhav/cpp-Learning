// String Methods

#include<iostream>
using namespace std;

int main(){
    string str="hello";
    string str2=" world";
    str.append(" world"); 
    cout<<str<<endl;  //append/conncatination: str+= str2

    str.push_back('a');
    cout<<str<<endl;

    str.pop_back();
    cout<<str<<endl;

    str.insert(2,"ABCD");  //inserting a string
    cout<<str<<endl;

    str.erase(5,4);   //Start at index 5 and remove 4 characters
    cout<<str<<endl;

    str.substr(6) ;  //Sub string: str.substr(index,length)
    cout<<str<<endl;

    cout<< str.find("ort") <<endl;
    

    str.replace(2,3, "llo");   // replace: str.relace(index_start,count,string)
    cout<<str<<endl;

    cout<< str.compare(str2) <<endl;

    str.swap(str2);
    cout<<str<<endl;
    
    return 0;
}