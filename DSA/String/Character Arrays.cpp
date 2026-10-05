//also known as cstring
//c++ mein jo character array hote hai un mein ek special characteristic hota hai that we can use them to store strings
//c++ ke array name jo hote hai they are constant pointers
#include <iostream>
using namespace std;

int main(){
    // char str[]={'a','b','c','\0'};
    // char st[]="hello";
    // cout<<st<<endl;
    // cout<<strlen(str)<<endl;//constant pointers

    // char str[100];
    // cout<<"Enter char array:";
    // cin.getline(str,100,'$');
    // cout<<"output:"<<str<<endl;

    // char str[6];
    // cout<<"Enter char array:";
    // cin.getline(str,6);

    // for(char ch:str){
    //     cout<<ch<<" ";
    // }
    // cout<<endl;

    char str[]="apna college";
    int len =0;

    for(int i=0;str[i]!='\0';i++){
        len++;
    }

    cout<<"length of string:"<<len<<endl;


    return 0;
}