class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
         int m = mat.size();
        int n = mat[0].size();
        
        // The transposed matrix will have n rows and m columns
        vector<vector<int>> result(n, vector<int>(m));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // Switch row and column indices
                result[j][i] = mat[i][j];
            }
        }
        
        return result;
    }
};