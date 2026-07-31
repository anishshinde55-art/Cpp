#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int result=0;

    while(n>0){
        int digit=n%10;
        if(digit==0){
            digit=5;
        }

        result=result*10+digit;
        n=n/10;

    }
    int answer =0;

    while(result>0){
        int digit=result%10;
        answer=answer*10+digit;
        result=result/10;
    }

    cout<<answer<<endl;










    return 0;
}