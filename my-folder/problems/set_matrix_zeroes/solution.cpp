
class Solution {
    public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row(n, 0); // SC: O(n)
        vector<int> col(m, 0); // SC: O(m)

        // mark the row and col corresponding to element 0
        for(int i = 0; i < n; i++) { // TC: O(n*m)
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // set all row and col as 0
        for(int i = 0; i < n; i++) { // TC: O(n*m)
            for(int j = 0; j < m; j++) {
                if(row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};