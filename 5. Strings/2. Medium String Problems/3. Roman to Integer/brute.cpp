// Problem Link: https://leetcode.com/problems/roman-to-integer/
// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> m;
        m['I'] = 1, m['V'] = 5, m['X'] = 10, m['L'] = 50, m['C'] = 100, m['D'] = 500, m['M'] = 1000;
        int ans = 0;
        ans += m[s[s.size() - 1]];
        for (int i = s.size() - 2; i >= 0; i--)
        {
            if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
                ans -= 1;
            else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
                ans -= 10;
            else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
                ans -= 100;
            else
                ans += m[s[i]];
        }
        return ans;
    }
};