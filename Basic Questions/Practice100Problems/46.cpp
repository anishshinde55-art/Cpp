#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter how many prime no. you want:"<<endl;
    cin>>n;

    int count=0;
    int num=2;

    while(count<n){
        bool isPrime=true;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
            count++;
        }

        num++;
    }

    









    return 0;
}