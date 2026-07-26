#include <iostream>
#include <string>
using namespace std;


 class Person{
 public:
         string name;
        int age;

//     //     Person(string name, int age){
//     //       this->name=name;
//     //       this->age=age;
//     //     }

//     // Person(){
//     //     cout<<"Parent constructor"<<endl;

//     // }


// //    ~Person(){
// //     cout<<"Parent Destructor"<<endl;
// //    }
 };


// dervied class : access modifier base class
class Student:public Person {
 public:
        
         int rollno ;
        //  Student(string name,int age,int rollno):Person( name,age){
        //     this->rollno=rollno;
        //     cout<<"Child constructor"<<endl;  
        //  }
        //  void getInfo(){
        //     cout<<"name: "<<name<<endl;
        //     cout<<"age :"<<age<<endl;
        //     cout<<"rollno"<<rollno<<endl;
        //  }




    //name,age,roll no.
    // ~Student(){
    //     cout<<"Child destructor"<<endl;
    // }

};

class Teacher:public Person {
 public:
        string subject;
        double salary;    
};

// class TA : public Student ,public Teacher {

     

// };



int main(){
    // TA t1;
    // t1.name="Anish Shinde";
    // t1.subject ="OOPS";

    // cout<<t1.name<<endl;
    // cout<<t1.subject<<endl;


    return 0;
}