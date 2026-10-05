#include<iostream>
#include<string>
using namespace std;
//String are dynamic in nature because it resizes in runtime
int main(){
    // string str="Apna college";//contiguous in nature
    // cout<<str<<endl;

    // string str1="apna";
    // string str2="college";

    // string str3=str1+str2;//concatentation
    // cout<<str3<<endl;

    // string str1="Anish";
    // string str2="Anish";

    // cout<<(str1==str2)<<endl;


    // string str1="Anish";
    // string str2="Shinde";

    // cout<<(str1>str2)<<endl;
    // cout<<str1.length()<<endl;

    // string str;
    // getline(cin,str);

     //cin>>str;

    // cout<<"output:"<<str<<endl;


    string str="apna college.";

    // for(int i=0;i<str.length();i++){
    //     cout<<str[i]<<" ";
    // }
    

    for(char ch:str){
        cout<<ch<<" ";
    }





    return 0;
}