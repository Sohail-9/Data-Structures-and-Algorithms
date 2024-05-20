class Solution {
public:
    int subsetXORSum(vector<int>& nums,int i=0,int total=0) {
        return i==nums.size() ?  total : (subsetXORSum(nums,i+1,total^nums[i]) + subsetXORSum(nums,i+1,total));
    }
};