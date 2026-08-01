#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no."<<endl;
    cin>>n;

    int original=n;
    int digits=0;
    int temp=n;

    while(temp>0){
        digits++;
        temp=temp/10;
    }

    temp=n;
    int sum=0;

    while(temp>0){
        int digit=temp%10;
        sum=sum+round(pow(digit,digits));
        temp=temp/10;
    }

    if(sum==original)
        cout<<original<<" is an Armstrong number.";
    else
        cout<<original<<" is not an Armstrong number.";

    return 0;
}