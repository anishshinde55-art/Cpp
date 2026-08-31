#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                int width=j-i;
                int minheight=min(height[i],height[j]);
                int area=width*minheight;
                 maxwater=max(maxwater,area);
        }

            }
           
        return maxwater;

        
    }
};
//Vector and variable name cannot be same .