#include<iostream>
using namespace std;

int main(){
    //for loop
    for(int count=1;count<=10;count++){
        cout<<"Anish"<<endl;
    }
    
    //counting from 1 to 5
    for (int i=1;i<=5;i++){
        cout<<i<<endl;
    }

    //counting from 51 to 69
    for (int i=51;i<=69;i++){
        cout<<i<<endl;
    }
    for (int i=1;i<=10;i++){
        cout<<i<<endl;
        if(i==5){
            break;
        }
       
    }
    for(int i=1;i<=10;i++){
        if(i==5){
            break;

        }
        cout<<"Iteration"<<i<<endl;
    }     
    for(int i=1;i<=5;i++){
        if(i==4){
            continue;

        }
        cout<<i<<endl;

    } 


    int i=1;
    while(i<=5){
        cout<<i<<endl;


        i++;
    }





    return 0;



}