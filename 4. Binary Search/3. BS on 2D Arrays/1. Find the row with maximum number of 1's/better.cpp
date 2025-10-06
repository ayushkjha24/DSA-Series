// Link : https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

// Time Complexity : O(m log n)
// Space Complexity : O(1)

// User function template for C++
class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> &arr)
    {
        int m = arr.size();
        int n = arr[0].size();
        int ans = -1, minIndex = n;
        for (int i = m - 1; i >= 0; i--)
        {
            int index = n;
            int low = 0, high = n - 1;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (arr[i][mid] == 1)
                {
                    index = mid;
                    high = mid - 1;
                }
                else
                    low = mid + 1;
            }
            if (index <= minIndex)
            {
                minIndex = index;
                ans = i;
            }
        }
        return ans;
    }
};