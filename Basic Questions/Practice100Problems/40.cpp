#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int countodd=0;
    int counteven=0;

    while(n>0){
        int digit=n%10;
        if(digit%2==0){
            counteven++;
        }
        else if(digit%2!=0){
            countodd++;

        }
        else{
          cout<<"neither odd nor even "<<endl;
        }
        n=n/10;
      }

        cout<<countodd<<endl;
        cout<<counteven<<endl;

        











    return 0;
}