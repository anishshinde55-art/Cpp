#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximumprofit=0;
        int bestbuy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestbuy){
                maximumprofit=max(maximumprofit,prices[i]-bestbuy);

            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return maximumprofit;
    }
};