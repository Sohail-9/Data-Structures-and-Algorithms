class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int total=matrix.size()*matrix[0].size();

        int s=0;
        int e=total-1;
        int m=s+(e-s)/2;

        while(s<=e){
            int r=m/matrix[0].size();
            int c=m%matrix[0].size();
            if(matrix[r][c]==target){
                return 1;
            }
            else if(matrix[r][c]>target){
                e=m-1;
            }
            else{
                s=m+1;
            }
            m=s+(e-s)/2;
        }
        return 0;
        
    }
};