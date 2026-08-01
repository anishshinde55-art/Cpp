#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int sum=0;

    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }

    if(sum==n){
        cout<<"It is a perfect number"<<n<<endl;
    }
    else{
        cout<<"Not a perfect number"<<n<<endl;
    }










    return 0;
}