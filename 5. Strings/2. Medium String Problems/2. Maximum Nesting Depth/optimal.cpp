// Problem Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution
{
public:
    int maxDepth(string s)
    {
        int count = 0, ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (count > ans)
                ans = count;

            if (s[i] == '(')
                count++;
            else if (s[i] == ')')
                count--;
            else
                continue;
        }
        return ans;
    }
};