#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a First number"<<endl;
    cin>>a;

    cout<<"Enter a Second number"<<endl;
    cin>>b;

    cout<<"Enter the Third number"<<endl;
    cin>>c;

    if(a>b && a>c){
        cout<<"First number is greater (a):"<<endl;
    }
    else if(b>a && b>c){
        cout<<"Second number is greater (b):"<<endl;
    }
    else if(c>a && c>b){
        cout<<"Third number is greater (c):"<<endl;

    }















   return 0; 
}