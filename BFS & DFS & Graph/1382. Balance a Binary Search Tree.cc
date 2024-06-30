class Solution {
private:
    vector<int> nums;
    void extractTree(TreeNode* root){
        if(!root){
            return;
        }
        extractTree(root -> left);
        nums.push_back(root -> val);
        extractTree(root -> right);
    }

    TreeNode* constructTree(int left, int right){
        if(left>right){
            return nullptr;
        }
        int mid = (left + right)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node -> left = constructTree(left, mid - 1);
        node -> right = constructTree(mid + 1, right);
        return node;
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        extractTree(root);
        return constructTree(0, nums.size()-1);
    }
};