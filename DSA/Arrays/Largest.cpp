#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int nums[]={10,56,88,90,101,32,500,60,43};
    int size=9;
    int largest=INT_MIN;

    for(int i=0;i<size;i++){
        // if(nums[i]>largest){
        //     largest=nums[i];
        // }
        largest=max(largest,nums[i]);
    }


    cout<<"Largest="<<largest<<endl;












    return 0;
}