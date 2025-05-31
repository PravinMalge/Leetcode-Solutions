class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();

        for(int i = 0; i < n; i++)
        {
            sum = sum + mat[i][i]; // Primary diagonal
            if(i != n - i - 1) 
            {
                sum = sum + mat[i][n - i - 1]; // Secondary diagonal
            }
        }

        return sum;
    }
};