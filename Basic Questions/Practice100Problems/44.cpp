#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    bool isPrime=true;

    if(n<=1){
        isPrime=false;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%2==0){
                isPrime=false;
                break;
            }
        }
    }


    if(isPrime){
        cout<<"Prime hai:"<<n<<endl;
    }
    else{
        cout<<"Prime nahi hai:"<<n<<endl;
    }







    return 0;
}