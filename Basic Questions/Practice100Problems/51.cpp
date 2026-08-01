#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int square =n*n;
    int temp=n;
    int digits=1;

    while(temp>0){
        digits=digits*10;
        temp=temp/10;

    }

    if (square % digits == n)
        cout << n << " is an Automorphic Number";
    else
        cout << n << " is not an Automorphic Number";

    return 0;
}










