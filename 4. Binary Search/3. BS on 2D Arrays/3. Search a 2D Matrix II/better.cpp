// Problem Link: https://leetcode.com/problems/search-a-2d-matrix-ii/

// Time Complexity: O(m * log(n)) where m is the number of rows and n is the number of columns in the matrix.
// Space Complexity: O(1) as we are not using any extra space.

class Solution
{
public:
    bool searchRow(vector<int> &matrix, int target)
    {
        int low = 0, high = matrix.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (matrix[mid] == target)
                return true;
            else if (matrix[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            if (searchRow(matrix[i], target))
                return true;
        }
        return false;
    }
};