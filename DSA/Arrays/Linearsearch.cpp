// return statement ke baad no execution
#include<iostream>
using namespace std;

int linearSearch(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;


}
int main(){
  int arr[]={4,2,7,8,1,2,5};
  int sz=7;
  int target=8;

  cout<<linearSearch(arr,sz,target)<<endl;;
  

    




    return 0;
}
//without function
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int sz=7;
//     int target=8;

//     int index = -1;

//     for(int i=0;i<sz;i++){
//         if(arr[i]==target){
//             index = i;
//             break;
//         }
//     }

//     cout << index << endl;

//     return 0;
// }