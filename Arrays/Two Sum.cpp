class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> a;        
        for(int i=0;i<n;++i){      //O(N) -> time complexity
           int num = nums[i];
           int more = target - num;
           if(a.find(more) != a.end()){
            return {a[more], i};
           }
           a[num] = i;
        }
        return {-1, -1};
    }
};