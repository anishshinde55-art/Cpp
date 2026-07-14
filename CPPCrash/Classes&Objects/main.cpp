#include<iostream>
using namespace std;
//class creation

class student{
    public:
    //properties //data members
    int age;
    int weight;
    int height;
    string name;



    //Constructor
    student(){
       cout<<"I am inside no param constructor"<<endl;
    }

    //parameterised constructor
    student(int myAge,int myWeight , int myHeight , string myName):age(myAge),weight(myWeight),height(myHeight),name(myName){
        cout<<"I am inside param constructor"<<endl;
      
    }




    //behaviour //member functions
    void running(){
        cout<<"I am running"<<endl;
    }
    void studying() {
        cout<<name<<"is studying"<<endl;

    }

    ~student (){
        cout<<"I am inside Destructor"<<endl;
    }

};
int main(){

    //class apki ek aisi utility hai jisse ap apka khud ka datatype create kar pa rahe hai
 //cout<<sizeof(student)<<endl;
 //empty class one byte ka space leti hai
 

 //Object Creation

 //static way
//  student s1;
//  s1.age=19;
//  s1.name="Anish";
//  s1.weight=50;
//  s1.height=180;
//  s1.running();




//  //dynamic way
//    student*s =new student();
//  (*s).age=10;
//  s->age=10;
//  (*s).height=190;
//  (*s).weight=80;
//  (*s).running();
//  s->studying();


//   student a;
//   student *s=new student;
//   student *c=new student();


//  student x;
//  student y(10,40,90,"Anish");


// student*s=new student(10,20,30,"Anish");
//  cout<<s->age<<endl;
//  cout<<s->weight<<endl;
//  cout<<s->height<<endl;
//  cout<<s->name<<endl;


 student *s=new student();


 delete s;



    
    







    return 0;
}