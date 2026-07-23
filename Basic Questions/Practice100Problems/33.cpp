#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter a number n:"<<endl;
    cin>>n;

    int count=0;

    while(n>0){
        count ++;
        n=n/10;
    }
    

    cout << "Number of digits = " << count;
















    return 0;
}