class Solution {
public:
    int hammingWeight(int n) {
        long long res = 0;
        while(n>0){
            n = n & n-1;
            res++;
        }
        return res;
    }
};