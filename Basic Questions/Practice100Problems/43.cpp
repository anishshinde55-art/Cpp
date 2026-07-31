#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int lastdigit=n%10;
    int firstdigit=n;

    while(firstdigit>=10){
        firstdigit=firstdigit/10;
    }

    int sum=0;
    sum=lastdigit+firstdigit;

    cout<<sum<<endl;















    return 0;
}