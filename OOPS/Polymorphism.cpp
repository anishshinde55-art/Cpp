#include<iostream>
#include<string>
using namespace std;

// class Student{
// public:
//     string name;


//     Student(){
//         cout<<"non-paramerterized"<<endl;

//     }

//     Student(string name){
//         this->name=name;
//         cout<<"Parameterized"<<endl;
//     }

// };

// class Print{
// public:
//        void show(int x){
//         cout<<"int:"<<x<<endl;

//        }

//        void show(char ch){
//         cout<<"char :"<<ch<<endl;
//        }

// };

class Parent {
public:
      void getInfo(){
        cout<<"Parent class"<<endl;

      }

     virtual  void hello(){
        cout<<"Hello from parent"<<endl;
     }

};


class Child:public Parent{
public:
      void getInfo(){
        cout<<"Child class"<<endl;
      }    
      
      void hello(){
        cout<<"hello from child"<<endl;
      }



}; 





int main(){
    Child c1;
    c1.hello();
    c1.getInfo();
    // Print p1;
    // p1.show('A');
//     Student s1("Anish Shinde");




   return 0;
 }
//function overloading is an example or implementation of compile time polymorphism it happens statically , we are adding two or more functions with the same name in the same class but they only differ in terms of their parameters
//private hai par inherite kar sakte hai dusri class mein =protected