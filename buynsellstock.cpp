#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    int mini=INT_MAX;
    int profit=0;
   
    for(int i=0;i<n;i++){
        if(prices[i]<=mini){
            mini=prices[i];
        }
         profit=max(profit,prices[i]-mini);
    }
    return (profit);
}