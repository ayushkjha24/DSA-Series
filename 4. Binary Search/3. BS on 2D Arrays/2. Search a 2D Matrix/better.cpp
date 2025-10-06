// Link : https://leetcode.com/problems/search-a-2d-matrix/

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int startRow = 0, endRow = m - 1;
        while (startRow <= endRow)
        {
            int midRow = (startRow + endRow) / 2;
            if (matrix[midRow][0] > target)
            {
                endRow = midRow - 1;
                continue;
            }
            else if (matrix[midRow][n - 1] < target)
            {
                startRow = midRow + 1;
                continue;
            }
            else
            {
                int startCol = 0, endCol = n - 1;
                while (startCol <= endCol)
                {
                    int midCol = (startCol + endCol) / 2;
                    if (matrix[midRow][midCol] == target)
                        return true;
                    else if (matrix[midRow][midCol] < target)
                        startCol = midCol + 1;
                    else
                        endCol = midCol - 1;
                }
                return false;
            }
        }
        return false;
    }
};