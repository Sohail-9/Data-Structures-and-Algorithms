class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> s_index;
        int per = 0;
        
        for(int i=0;i<s.length();i++){
            s_index[s[i]] = i;
        }
        
        for(int i=0;i<t.length();i++){
            per += abs(s_index[t[i]] - i);
        }
        return per;
    }
};