#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
    double salary;
public:  
//properties //attributes//data members
   string name;
    string dept;
    string subject;
   //Non-parameterized constructor  
    //Teacher(){
        //dept ="Computer Engg";

    // }
    //Parameterized
    Teacher(string name,string dept ,string subject,double salary){
       //object property this->
       this->name=name;
       this-> dept=dept;
       this-> subject=subject;
       this-> salary=salary;

     }

     //copy constructor
     Teacher(Teacher &orgobject) {
        cout<<"I am custom copy Constructor"<<endl;
        //pass by reference = original object ki copy nahi hai original object hi hai address pass hota hai original obj ka
        this->name=orgobject.name;
       this-> dept=orgobject.dept;
       this-> subject=orgobject.subject;
       this-> salary=orgobject.salary;



     }
    
 
    





    //methods//function jo class ke andar hai//member functions
    void changeDept(string newDept){
        dept=newDept;
    }
    //setter=Private values ko set karna
    void setSalary(double s){
        salary=s;
    }
    //getter=Private values ki value get karna
    double getSalary(){
        return salary;
    }

    void getinfo(){
        cout<<"name:"<<name<<endl;
        cout<<"subject:"<<subject<<endl;
    }

};      





int main(){
     Teacher t1("Anish","Computer Engg","C++",2500000);//Constructor call
    // t1.getinfo();







    Teacher t2(t1); //default copy constructor -invoked
    t2.getinfo();
    
    
  
    







    return 0;
}