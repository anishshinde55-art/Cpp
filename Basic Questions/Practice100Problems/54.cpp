#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int count=0;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            
            cout<<i<<endl;
            count++;
            
            
            
            

        }
         
        

    }
    cout<<"The total factors are:"<<count<<endl;










    return 0;
}