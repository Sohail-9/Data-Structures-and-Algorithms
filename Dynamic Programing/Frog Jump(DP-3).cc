#include <bits/stdc++.h>
using namespace std;
//solved using dynamic programming
//time complexity O(n) and space complexity O(n)
class solution {
    public:
        //top down solution using recursion
        int f(int ind, vector<int> &costs, vector<int> &dp){
        if(ind == 0) return 0;
        if(dp[ind] != -1) return dp[ind];
        int slow = f(ind-1, costs, dp) + abs(costs[ind]-costs[ind-1]);
        int fast = INT_MAX;
        if(ind > 1) fast = f(ind-2, costs, dp) + abs(costs[ind]-costs[ind-2]);
        return dp[ind] = min(slow, fast);
    }
    int minimumEnergy(vector<int>& height, int n) {
        vector<int> dp(n+1, -1);
        return f(n-1, height, dp);
    }
}

class solution {
    public:
        int minimumEnergy(vector<int>& height, int n) {
        //bottom-up solution using tabulation. 
        //space optimized
        int prev = 0;
        int prev2 = 0;
        for(int i=1;i<n;++i){
            int ff = prev + abs(height[i]-height[i-1]);
            int ss = INT_MAX;
            if(n > 1) ss = prev2 + abs(height[i]-height[i-2]);
            int curri = min(ff, ss);
            prev2 = prev;
            prev = curri;
        }
        return prev;
    }
}