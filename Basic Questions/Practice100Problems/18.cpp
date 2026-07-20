#include<iostream>
using namespace std;

int main(){
    int Marks;
    cout<<"Enter your marks"<<endl;
    cin>>Marks;

    if(Marks<=100 && Marks>=90){
        cout<<"GRADE A"<<endl;
    }
    else if(Marks<=89 && Marks>=75){
        cout<<"GRADE B"<<endl;
    }
    else if(Marks<=74 && Marks>=65){
        cout<<"GRADE C"<<endl;
    }
    else if(Marks<=64 && Marks>=33){
        cout<<"GRADE D"<<endl;
    }
    else if(Marks<=32 && Marks>=0){
        cout<<"GRADE F"<<endl;
    }








    return 0;
}