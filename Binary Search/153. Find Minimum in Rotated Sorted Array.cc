// solution 1
class Solution {
public:
    int findMin(vector<int>& nums) {
        int sum = nums[0];
        for(int i=0;i<nums.size();++i){
            sum = min(nums[i], sum);
        }
        return sum;
    }
};

// solution 2
class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[0];
    }
};