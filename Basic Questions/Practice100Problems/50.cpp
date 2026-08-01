#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the nummber"<<endl;
    cin>>n;

    int original=n;
    int sum=0;

    while(n>0){
        int digit=n%10;


        int fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;

    }


    if(sum==original){
        cout<<"Strong number"<<endl;
    }

    else{
        cout<<"Not a strong number"<<endl;
    }









    return 0;
}