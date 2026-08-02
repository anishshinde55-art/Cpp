#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the two numbers:"<<endl;
    cin>>a>>b; 

    int lcm;

    if(a>b){
        lcm=a;
    }
    else{
        lcm=b;
    }

    while(true){
        if(lcm%a==0 && lcm%b==0){
            break;
        }
        lcm++;
    }
    cout << "LCM of " << a << " and " << b << " is " << lcm;

    return 0;
  

}