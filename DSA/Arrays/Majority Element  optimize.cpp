#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        //sort
        sort(nums.begin(),nums.end());

        //freq count
        int freq=1, ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                freq++;
            }else{
                freq=1;
                ans=nums[i];
            }
            if(freq>n/2){
                return ans;
            }
        }

        return ans;

    }
};