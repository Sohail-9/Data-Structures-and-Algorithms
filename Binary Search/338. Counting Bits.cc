class Solution {
public:
    int rec(int n){
        return bitset<32>(n).count();
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++) v.emplace_back(rec(i));
        return v;
    }
};