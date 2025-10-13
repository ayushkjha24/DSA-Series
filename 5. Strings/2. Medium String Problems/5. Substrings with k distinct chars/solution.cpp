// Problem Link : https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution
{
public:
    long long atMostK(string &s, int k)
    {
        int n = s.size();
        vector<int> freq(26, 0);
        long long ans = 0;
        int left = 0;
        int distinct = 0;

        for (int right = 0; right < n; right++)
        {
            if (freq[s[right] - 'a'] == 0)
                distinct++;
            freq[s[right] - 'a']++;

            while (distinct > k)
            {
                freq[s[left] - 'a']--;
                if (freq[s[left] - 'a'] == 0)
                    distinct--;
                left++;
            }

            ans += (right - left + 1);
        }

        return ans;
    }

    int countSubstr(string &s, int k)
    {
        if (k == 0)
            return 0;
        return atMostK(s, k) - atMostK(s, k - 1);
    }
};
