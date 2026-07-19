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

    if(a<b && a<c){
        cout<<"First number is smallest (a):"<<endl;
    }
    else if(b<a && b<c){
        cout<<"Second number is smallest (b):"<<endl;
    }
    else if(c<a and c<b){
        cout<<"Third number is smallest (c):"<<endl;
    }







}