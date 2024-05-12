class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //direct optimal solution solution no need of brute force
        int maxi = 0;
        int ct = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i] == 1){
                ct++;
                maxi = max(maxi, ct);
            }
            else{
                ct = 0;
            }
        }
        return maxi;
    }
};