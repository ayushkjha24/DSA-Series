// Problem link : https://www.naukri.com/code360/problems/matrix-median_873378?leftPanelTabValue=PROBLEM

// Time Complexity : O(m*n log(m*n)) where m is the number of rows and n is the number of columns in the matrix.
// Space Complexity : O(m*n)

#include <algorithm>
int getMedian(vector<vector<int>> &matrix)
{
    vector<int> v;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            v.push_back(matrix[i][j]);
        }
    }
    sort(v.begin(), v.end());
    int mid = v.size() / 2;
    return v[mid];
}