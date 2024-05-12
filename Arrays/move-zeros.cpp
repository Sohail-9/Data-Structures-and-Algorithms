class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        vector<int>z;
        for(auto n : nums){
            if(n == 0){
                z.push_back(n);
            }
            else{
                ans.push_back(n);
            }
        }
        nums.clear();
        nums.insert(nums.end(),ans.begin(),ans.end());
        nums.insert(nums.end(),z.begin(),z.end());
    }
};