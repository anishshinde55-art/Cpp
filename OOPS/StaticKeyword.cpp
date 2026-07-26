#include <iostream>
#include <string>
using namespace std;


// void func(){
//     static int x= 0;//init statement will run only once
//     cout<<"x:"<<x<<endl;;
//     x++;


// };


// class A{
// public:
//      int x;
//      void incre(){
//         x++;
//      }
// };

class ABC {
public:
    ABC(){
        cout<<"constructor"<<endl;
    }

   ~ABC(){
    cout<<"Destructor"<<endl;
   } 
};

int main(){
    if(true){
        static ABC obj;

    }
    cout<<"end of main function"<<endl;
    

    // A obj1;
    // A obj2;
    // obj1.x=100;
    // obj2.x=200;
    // cout<<obj1.x<<endl;
    // cout<<obj1.x<<endl;
    // return 0;

}