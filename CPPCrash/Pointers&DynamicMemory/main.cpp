#include<iostream>
using namespace std;
//pointers ek variable hai jiske andar sirf aur sirf ek memory address hi store ho sakta hai

void solve(int *arr){
    cout<<"inside func:"<<sizeof(arr)<<endl;
}

int main(){
 //declare
//  int number =50;
//  cout<<"Printing address of number:"<<&number<<endl;
//  int *ptr =&number; //&variable is used for knowing the address
 
//  cout<<number<<endl; //50
//  cout<<&number<<endl;//address of number
//  cout<<ptr<<endl;//address of number
//  cout<<&ptr<<endl;//address of ptr
//  cout<<*ptr<<endl;//value present at address store at ptr =50    d reference operator 
//  (*ptr)++; //pointer ke daura bhi same variable ko access kar pate ho 
//  cout<<number<<endl;


// int *ptr=0; //or int *ptr=NULL;
// cout<<*ptr; //segmentation fault aayega aisi memory jo exist nahi karti ya phir memory space se bahar

//pointer ka use karke humlog dynamic memory access kar pate hai

// int arr[4]={1,2,3,4};
// cout<<sizeof(arr)<<endl;
// solve(arr);

 int a=5;
 int *ptr=&a;
 int **ctr=&ptr;
 int ***dtr =&ctr;

 cout<<a<<endl;
 cout<<&a<<endl;
//  cout<<*a<<endl;
 cout<<ptr<<endl;
 cout<<&ptr<<endl;
 cout<<*ptr<<endl;
 cout<<ctr<<endl;
 cout<<&ctr<<endl;
 cout<<*ctr<<endl;
 cout<<**ctr<<endl;
 cout<<dtr<<endl;
 cout<<&dtr<<endl;
 cout<<*dtr<<endl;
 cout<<**dtr<<endl;
 cout<<***dtr<<endl;


    return 0;
}