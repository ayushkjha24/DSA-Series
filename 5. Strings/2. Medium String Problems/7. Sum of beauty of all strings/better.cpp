// Problem link: https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
// Time Complexity: O(N^2 * 26) ~ O(N^2)
// Space Complexity: O(26) ~ O(1)

class Solution
{
public:
    int beautySum(string s)
    {
        int n = s.length();
        int sum = 0;

        // Loop over all substrings
        for (int i = 0; i < n; i++)
        {
            unordered_map<char, int> freq;

            for (int j = i; j < n; j++)
            {
                // Increase frequency of current character
                freq[s[j]]++;

                int maxi = INT_MIN;
                int mini = INT_MAX;

                // Find max and min frequency
                for (auto it : freq)
                {
                    mini = min(mini, it.second);
                    maxi = max(maxi, it.second);
                }

                // Add difference to sum
                sum += (maxi - mini);
            }
        }

        return sum;
    }
};