class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //O(N) time complexity && O(1) space complexity
        int val;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                val=i;
                break;
            }
            
        }
        return val;
    }
};