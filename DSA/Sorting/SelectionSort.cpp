#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestindex =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestindex]){
                smallestindex=j;
            }
        }
        swap(arr[i],arr[smallestindex]);
       }
}
void printArray(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={8,5,10,9,17,93};
   int n=6;
   selectionsort(arr,n);
   printArray(arr,n);
   return 0;

}