// Link : https://leetcode.com/problems/search-a-2d-matrix-ii/

// Time Complexity : O(m + n)
// Space Complexity : O(1)

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int row = 0, col = matrix[0].size() - 1;
        while (row < m && col >= 0)
        {
            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] < target)
                row++;
            else
                col--;
        }
        return false;
    }
};