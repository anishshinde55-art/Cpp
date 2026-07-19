#include<iostream>
using namespace std;



int main(){
    char alphabet;

    cout<<"The alphabet is :"<<endl;
    cin>>alphabet;

    if(alphabet =='a' || alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u' ||
       alphabet=='A'  ||alphabet=='E' ||alphabet=='I'||alphabet=='O'||alphabet=='U'
    ){
        cout<<"It is a vowel"<<endl;
    }
    else{
        cout<<"It is a consonant"<<endl;
    }










    return 0;
}