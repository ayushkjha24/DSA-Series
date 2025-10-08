// Problem Link: https://leetcode.com/problems/reverse-words-in-a-string/
// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "";
        int l = 0;
        int i = s.size() - 1;
        for (; i >= 0; i--)
        {
            if (s[i] != ' ')
                l++;
            else
            {
                if (!l)
                    continue;
                else
                {
                    if (ans != "")
                        ans += ' ';
                    int j = i + 1;
                    while (l)
                    {
                        ans += s[j];
                        j++, l--;
                    }
                }
            }
        }
        if (l)
        {
            i = 0;
            if (ans != "")
                ans += ' ';
            while (l)
            {
                ans += s[i];
                i++, l--;
            }
        }
        return ans;
    }
};