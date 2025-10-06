// Problem Link: https://leetcode.com/problems/search-a-2d-matrix/

// Time Complexity: O(m * n) where m is the number of rows and n is the number of columns in the matrix.
// Space Complexity: O(1) as we are not using any extra space.

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == target)
                    return true;
            }
        }
        return false;
    }
};