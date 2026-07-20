#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter Number"<<endl;
    cin>>a;

    if(a%3==0&&a%5==0){
        cout<<"It is divisible by both 3 and 5"<<endl;

    }
    else{
        cout<<"Not divisible by 3 and 5"<<endl;
    }











    return 0;
}