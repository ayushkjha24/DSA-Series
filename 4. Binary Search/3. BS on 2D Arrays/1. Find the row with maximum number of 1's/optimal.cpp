// Link : https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

// Time Complexity : O(m + n)
// Space Complexity : O(1)

// User function template for C++
class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> arr)
    {
        // code here
        int ans = -1;
        int row = 0, col = arr[0].size() - 1;
        while (row < arr.size() && col >= 0)
        {
            if (arr[row][col] == 1)
            {
                ans = row;
                col = col - 1;
            }
            else
                row += 1;
        }
        return ans;
    }
};