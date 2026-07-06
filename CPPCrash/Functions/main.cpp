#include<iostream>
using namespace std;
  
// int sum (int a, int b){

//     int totalsum =a+b;
//     return totalsum;

// }
//  void printmyname(){
//     cout<<"Anish"<<endl;
//  }

// int main(){

//     // int ans =sum(5,10);


//     // cout<<ans<<endl;
//     //Functioncall
//     printmyname();
//   //ordering matter karti hai  upar function define karo 

//     return 0;
// }




int multiplication (int x,int y,int z){
    int multiply =x*y*z;
    return multiply;

}

void printname10times(){
    for (int i=1 ;i<=10;i++){
        cout<<"Anish"<<endl;
    }
}

void printmultiples (int num){
    for (int i=1 ; i<=10;i++){
        cout<<num*i<<endl;
    }

}

int converIntoCelcius (int far){
    int celcius =(far-32)*5/9;
    return celcius;
}

char convertIntouppercase (char ch){
    char ans  =ch-'a' +'A';
    return ans;

}

int main () {

    //Function call
    // int ans =  multiplication(5,4,3);
    // cout<<ans<<endl;


    // printname10times();



    //  printmultiples(5);

    // int jawab=converIntoCelcius(90);
    // cout<<jawab<<endl;
     

    char result=convertIntouppercase('k');
    cout<<result<<endl;
    
    
}

