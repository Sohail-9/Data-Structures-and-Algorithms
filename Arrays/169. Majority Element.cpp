class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moore's majority voting algorithm
        // optimized solution
        int n = nums.size();
        int ct =0;
        int el;
        for(int i=0;i<n;++i){
            if(ct == 0){
                ct = 1;
                el = nums[i]; 
            } 
            else if(nums[i] == el){
                ct++;
            } else {
                ct--;
            }
        }
        int ct1 = 0;
        for(int i=0;i<n;++i){
            if(nums[i] == el) ct1++;
        }
        if(ct1 > (n/2)){
            return el;
        }
        return -1;
    }
};