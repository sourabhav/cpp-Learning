// strcmp()
// -ve,0,ve

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[20]= "hello";
    char str2[20]= "world";
    
    cout<< strcmp(str,str2) <<endl;
    return 0;
}