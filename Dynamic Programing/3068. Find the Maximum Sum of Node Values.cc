class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long total = accumulate(nums.begin(), nums.end(), 0ll);

        long long total_diff = 0;
        long long diff;
        int ct = 0;
        long long min_abs = numeric_limits<int>::max();

        for(auto p:nums){
            diff = (p^k) -p;
            if(diff >0){
                total_diff += diff;
                ct++;
            }
            min_abs = min(min_abs, abs(diff));
        }

        if(ct %2 == 1){
            total_diff = total_diff - min_abs;
        }

        return total + total_diff;
    }
};