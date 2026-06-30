#include <iostream>
using namespace std;

int main(){                                               

    char grade;
    cout << "Enter your grade"<<endl;
    cin>>grade;
    cout<<"Your grade is"<<grade<<endl;

    // if (grade=='A'){
    //     cout<<"Your marks is 90-100"<<endl;

    // }

    // else if(grade=='B'){
    //         cout<<"Your marks is 80-90"<<endl;
    //     }

    // else if(grade =='C'){
    //         cout<<"Your marks is 70-80"<<endl;

    //     }
    // else if(grade=='D'){
    //         cout<<"Your marks is 60-70"<<endl;


    //     }
    // else{
    //     cout<<"Your marks is 0-60"<<endl;

    // }  


    switch(grade){
        case 'A':cout<<"Your marks is 90-100"<<endl;
        break;
        case 'B':cout<<"Your marks is 80-90"<<endl;
        break;
        case 'C':cout<<"Your marks is 70-80"<<endl;
        break;
        case 'D':cout<<"Your marks is 60-70"<<endl;
        break;
        default:cout<<"Your marks is 0-60"<<endl;

    }
  return 0;
}








      