#include<iostream>
using namespace std;


int main(){
    string a="My name is Anish";
    //11 index->'A'
    string b="Anish";


  int ans = a.find(b); //size_t is an unsigned intergral type
  if(ans==string::npos){
    cout<<"b string not found in a string"<<endl;
    cout<<string::npos<<endl;


  }
  else {
    cout<<"Found"<<endl;
  }     


    // string a ="love";
    // string b ="love";
    // if(a.compare(b)==0){
    //     cout<<"strings are equal"<<endl;

    // }
    // else{
    //     cout<<"strings are not equal"<<endl;
    // }
    // string str="statement";
    // cout<<str.substr(5,4)<<endl;


    // string str="Anish";
    // string temp ="Shinde";
    // // str.append(temp);
    // str.insert(3,temp);
    // cout<<str<<endl;

    // cout<<"Length:"<<str.length()<<endl;


    //declare

//     string name;
//     name.push_back('a');
//     name.push_back('b');
//     name.push_back('c');
//     cout<<name<<endl;


//     char arr[100];
//     arr[0]='a';
//     arr[1]='b';
//     arr[2]='c';
//     arr[3]='\0';
//     cout<<arr<<endl;



//   //initialisation
//   string surname ="Shinde";

//   //updation
//   surname ="Shindee";
}