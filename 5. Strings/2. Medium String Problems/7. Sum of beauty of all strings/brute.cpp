// Problem Link: https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
// Time Complexity: O(N^3)
// Space Complexity: O(1)

class Solution
{
public:
    int beautySum(string s)
    {
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            vector<int> v(26, 0);
            for (int j = i; j < n; j++)
            {
                v[s[j] - 'a']++;
                int maxi = INT_MIN, mini = INT_MAX;
                for (int i = 0; i < 26; i++)
                {
                    if (v[i] > maxi)
                        maxi = v[i];
                    if (v[i] < mini && v[i] > 0)
                        mini = v[i];
                }
                ans += (maxi - mini);
            }
        }
        return ans;
    }
};