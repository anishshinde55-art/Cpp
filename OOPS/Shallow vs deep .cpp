#include <iostream>
#include <string>
using namespace std;


class student {
public:
      string name;
      double* cgpaPtr; //pointer creation

      student(string name,double cgpa){
        this->name =name;
        cgpaPtr = new double;  //pointer ko nayi memory ki taraf point karwaya
        *cgpaPtr=cgpa; //point wali memory mein cgpa ki value ko store karwaya

      }

      student(student &obj){ // copy constructor
        this->name =obj.name;
        cgpaPtr = new double;
        *cgpaPtr=*obj.cgpaPtr;
      }
      

      //destructor
      ~student(){
        cout<<"Hi, I DELETE everything"<<endl;
        delete cgpaPtr;//memory leak
      }
      


      void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"cgpa :"<<*cgpaPtr<<endl;
      }




};


int main(){
    student s1("Anish Shinde",8.77);
    s1.getInfo();

    student s2(s1);
    *(s2.cgpaPtr)=9.2;
    s1.getInfo();


    s2.name="neha";
    s2.getInfo();
    return 0;
}