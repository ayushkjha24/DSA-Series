// Problem link : https://www.naukri.com/code360/problems/matrix-median_873378?leftPanelTabValue=PROBLEM

// Time Complexity : O(log(max-min)*m*log(n)) where m is the number of rows and n is the number of columns in the matrix.
// Space Complexity : O(1)

#include <climits>
int upperBound(vector<int> &arr, int x, int n)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}

int countSmallEqual(vector<vector<int>> &matrix, int m, int n, int x)
{
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        cnt += upperBound(matrix[i], x, n);
    }
    return cnt;
}

int getMedian(vector<vector<int>> &matrix)
{
    int low = INT_MAX, high = INT_MIN;
    int m = matrix.size(), n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][n - 1]);
    }
    int req = (m * n) / 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int smallEqual = countSmallEqual(matrix, m, n, mid);
        if (smallEqual <= req)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}