#include <bits/stdc++.h>
#define MOD 1000000007;
using namespace std;

class Solution {
public:
    int solve(TreeNode* root, int& ans){
        if(root == NULL) return 0;
        int left = solve(root->left, ans);
        int right = solve(root->right, ans);
        int z = root->val - 1;
        ans += abs(left) + abs(right);
        return left + right + z;
    }
    int distributeCoins(TreeNode* root){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int ans = 0;
        solve(root, ans);
        return ans;
    }
};