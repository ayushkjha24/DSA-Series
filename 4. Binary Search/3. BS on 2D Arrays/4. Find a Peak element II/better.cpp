// Link : https://leetcode.com/problems/find-a-peak-element-ii/

// Time Complexity : O(m*n) where m is the number of rows and n is the number of columns in the matrix.
// Space Complexity : O(1)

class Solution
{
public:
    vector<int> findPeakGrid(vector<vector<int>> &mat)
    {
        int m = mat.size(), n = mat[0].size();
        int rowIndex = -1, colIndex = -1;
        int maxElement = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] > maxElement)
                {
                    rowIndex = i;
                    colIndex = j;
                    maxElement = mat[i][j];
                }
            }
        }
        return {rowIndex, colIndex};
    }
};