#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    for(int num=1;num<=n;num++){
        int original=num;
        int temp =num;
        int digits=0;


        //counting digits
        while(temp>0){
            digits++;
            temp=temp/10;
        }

         temp=num;
         int sum=0;

        //calculate armstrong sum
        while(temp>0){
            int digit=temp%10;
            sum=sum+round(pow(digit,digits));
            temp=temp/10;
        }
        //check
        if(sum==original){
            cout<<original<<endl;
        }


    }




 return 0;

}