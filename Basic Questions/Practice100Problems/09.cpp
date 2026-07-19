#include<iostream>
using namespace std;


int main(){
    float Maths,Science,Sst,English,ComputerScience ;

    cout<<"Maths marks are:"<<endl;
    cin>>Maths;


    cout<<"Science marks are:"<<endl;
    cin>>Science;

    cout<<"Sst marks are:"<<endl;
    cin>>Sst; 

    cout<<"English marks are:"<<endl;
    cin>>English;

    cout<<"ComputerScience marks are:"<<endl;
    cin>>ComputerScience;

    
    float sum=Maths+Science+Sst+English+ComputerScience;
    cout<<"The sum is:"<<sum<<endl;

    float average=sum/5;
    cout<<"The average is:"<<average<<endl;







    return 0;
}