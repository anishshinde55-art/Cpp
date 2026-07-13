#include<iostream>
using namespace std;


int main(){
//    //heap address return karta hai 
//If you want to allocate memory on the heap in C++, you use new.

//     //Dynamic memory
//      int *ptr=new int;
//      *ptr=5;
//      cout<<*ptr;

//     //ab mereko need nahi hai is int ki
//     delete ptr;


 int *ptr=new int[5];
 ptr[0]=10;
 ptr[1]=20;
 ptr[2]=30;
 *(ptr+3)=40;
 *(ptr+4)=50;
//  cout<<ptr[0]<<endl;

  for(int i=0;i<5;i++){
   cout<<ptr[i]<<" ";
  }

 delete []ptr; 







    return 0;
}