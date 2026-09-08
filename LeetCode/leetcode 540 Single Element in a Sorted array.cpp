#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=n-1;
        if(n==1){
            return nums[0];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid==0 && nums[0]!=nums[1]){
                return nums[mid];
            }
            else if(mid==n-1 && nums[n-1]!=nums[n-2]){
                return nums[mid];
            }
            else if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]){
                return nums[mid];
                
            }
            else if(mid%2==0){ 
                if(nums[mid]==nums[mid-1]){
                      end=mid-1;
                }
               else{
                start=mid+1;
              
               }  
            }
            else if(mid%2!=0){
                if(nums[mid-1]==nums[mid]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;

    }
};