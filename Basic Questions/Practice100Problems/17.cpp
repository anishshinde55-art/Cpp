#include<iostream>
using namespace std;


int main(){
  char ch;
  cout<<"Enter a element"<<endl;
  cin>>ch;

  if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')) {
    cout<<"It is a alphabet"<<endl;

  }
  
  else if(ch>='0'&& ch<='9'){
    cout<<"It is a number"<<endl;
  }
  else{
    cout<<"It is a special character"<<endl;
  }


 return 0;


}