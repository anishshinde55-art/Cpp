#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    int original =n;
    int sum=0;
    

    while(n>0){
        int digits=n%10;
            sum=sum+digits;
            n=n/10;
        


    }

    if(original%sum==0){
        cout<<"Harshad niven number"<<endl;
    }
    else{
        cout<<"Not a harshad niven number"<<endl;
    }










    return 0;
}