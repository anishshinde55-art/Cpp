#include<iostream>
using namespace std;

int main(){

    int a=5;
    //ref var datatype&name that is different from real name =realname or previousname;
    //same memory location can be used with different names
    int &temp=a;
    cout<<temp<<endl;
    temp--;
    cout<<temp<<endl;
    temp =temp*10;
    cout<<temp<<endl;
    a++;
    cout<<a<<endl;
    return 0;


}