#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr=&a;
    int **Parentptr=&ptr;

    cout<<&ptr<<endl;
    cout<<Parentptr<<endl;









    return 0;
}