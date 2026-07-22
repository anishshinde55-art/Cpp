#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;

    int count=0;

    for(int i=1;i<=n;i++){
        if(i%3==0){
            count++;
            cout<<count<<endl;

            
            

        }
    }

       cout << "Numbers divisible by 3 = " << count << endl;
        

     
    return 0;
  }













