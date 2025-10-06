// Link : https://leetcode.com/problems/find-a-peak-element-ii/
// Time Complexity : O(m*n*4) where m is the number of rows and n is the number of columns in the matrix.
// Space Complexity : O(1)

class Solution
{
public:
    vector<int> findPeakGrid(vector<vector<int>> &mat)
    {
        int m = mat.size(), n = mat[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int left = j - 1 >= 0 ? mat[i][j - 1] : -1;
                int right = j + 1 < n ? mat[i][j + 1] : -1;
                int top = i - 1 >= 0 ? mat[i - 1][j] : -1;
                int bottom = i + 1 < m ? mat[i + 1][j] : -1;
                int ele = mat[i][j];
                if (ele > left && ele > right && ele > top && ele > bottom)
                    return {i, j};
            }
        }
        return {-1, -1};
    }
};