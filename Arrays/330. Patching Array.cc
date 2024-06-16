class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int64_t maxReach = 0;
        int ans=0;
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        for(int i=0;i<nums.size() && maxReach<n;){
            if(nums[i]>maxReach+1){
                maxReach+=maxReach+1;
                ans++;
            } else {
                maxReach+=nums[i];
                i++;
            }
        }
        while(maxReach<n){
            ans++;
            maxReach+=(int64_t)maxReach+1;
        }
        return ans;
    }
};
