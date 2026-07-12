#include<iostream>
using namespace std;
//pass by value humesha copy banti hai
// void solve(string str){
//     cout <<"inside function"<<str<<endl;
//     str[0]='P';
//     cout <<"inside function"<<str<<endl;
    
// }
// void solve(int &a){
//     cout<<"inside func"<<a<<endl;
//     a++;
//     cout<<"inside func"<<a<<endl;

// }

// void solve (char &a){
//     cout<<"inside func"<<a<<endl;
//     a++;
//     cout<<"inside func"<<a<<endl;
// }


// void solve(string &a){
//     cout<<"inside func"<<a<<endl;
//     a="Shinde";
//     cout<<"inside func"<<a<<endl;
// }

void countEvenNum(int arr[],int size,int &count) {
    for(int index=0;index<size;index++){
        if(arr[index]%2 == 0){

            count++;
            
        }
    }
}

int main() {
    // int a =50;
    // cout <<"inside main"<<a<<endl;
    // solve(a);
    // cout <<"inside function"<<a<<endl;


    // char a='k';
    // cout<<"inside main"<<a<<endl;
    // solve(a);
    // cout<<"inside main"<<a<<endl;

    // string name ="Anish";
    // cout<<"inside main"<<name<<endl;
    // solve(name);
    // cout<<"inside main"<<name<<endl;


    int arr[]={1,2,3,4,5};
    int size =5;
    int count=0;

    countEvenNum(arr,size,count);
    cout<<"Even Number count:"<<count<< endl;

 


   //array humesha pass by reference hota hai pass by value nahi

    return 0;





}



 



























