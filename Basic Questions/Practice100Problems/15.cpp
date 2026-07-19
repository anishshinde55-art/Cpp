#include<iostream>
using namespace std;



int main(){
    int year;

    cout<<"The number is:"<<endl;
    cin>>year;

    if(year%400==0 ||(year%4==0 && year%100!=0)){
        cout<<"The year is prime "<<endl;
    }
    else{
        cout<<"The year is not prime "<<endl;
    }











    return 0;
}