#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;//0th index address
    cout<<*arr<<endl;//0th index value

    int a=15,b=10;
    int *ptr=&a;
    ptr=&b;

    int c=19;
    // arr=&a;//constant pointer










    return 0;
}