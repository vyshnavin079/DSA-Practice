#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=0;
        int profit;
        int maxprofit=0;
        for(int i=1;i<n;i++){
            if(prices[buy]>prices[i]){
                buy=i;
            }
            else{
                profit=prices[i]-prices[buy];
                maxprofit = max(profit,maxprofit);
            }
        }
        return maxprofit;
    }
};