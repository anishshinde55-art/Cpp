#include<iostream>
using namespace std;


int main(){
    int a,b;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b;

    int gcd=1;

    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    
      cout << "GCD (HCF) = " << gcd;










    return 0;
}