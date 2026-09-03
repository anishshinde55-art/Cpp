#include<iostream>
using namespace std;


void changeA(int *ptr){//pass by refernce using pointers
    *ptr=20;
    
}


int main(){
    int a=10;
    changeA(&a);
    cout<<"inside main f:"<<a<<endl;















    return 0;
}


//or
//#include<iostream>
// using namespace std;


// void changeA(int &a){//pass by refernce using pointers
//     a=20;
// }


// int main(){
//     int a=10;
//     changeA(a);
//     cout<<"inside main f:"<<a<<endl;















//     return 0;
// }



