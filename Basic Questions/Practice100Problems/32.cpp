#include<iostream>
using namespace std;



int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Number Divisible by 3 & 5 are:"<<endl;

    for(int i=0;i<=n;i++){
        if(i%3==0||i%5==0){
            cout<<i<<endl;
        }
    }













    return 0;
}