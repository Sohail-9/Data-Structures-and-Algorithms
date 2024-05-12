class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //brute force approach
        //normal one 
        //better approach 
        //using sum = n*n+1/2 and sum= sum/2;
        // optimal approach
        // in xor operator if 0 ^ 0 it return 0 only any same value is xor it returns 0 
        // if xor of 0 ^ 2 it returns 2 so any val 0 ^ val done it return main value 
        int xor1 = 0, xor2 = 0;
        int n = nums.size();
        for(int i=0;i<n;++i){
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ (i+1);
        }
        return xor1 ^ xor2;

    }
};