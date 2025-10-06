// Problem Link: https://leetcode.com/problems/search-a-2d-matrix/

// Time Complexity: O(log(m * n)) where m is the number of rows and n is the number of columns in the matrix.
// Space Complexity: O(1) as we are not using any extra space.

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0, high = n * m - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int row = mid / m, col = mid % m;
            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
};