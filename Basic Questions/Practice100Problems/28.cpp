#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int factorial=0;

    for(int i=1;i<=n;i++){
        factorial=n*i;
        cout<<"The factorial is"<<factorial<<endl;
    }













    return 0;
}