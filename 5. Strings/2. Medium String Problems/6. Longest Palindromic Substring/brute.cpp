// Problem Link: https://leetcode.com/problems/longest-palindromic-substring/
// Time Complexity: O(n^3)
// Space Complexity: O(1)

class Solution
{
public:
    bool checkPalindrome(string temp)
    {
        int i = 0, j = temp.size() - 1;
        while (i <= j)
        {
            if (temp[i] != temp[j])
                return false;
            i++, j--;
        }
        return true;
    }

    string longestPalindrome(string s)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            string temp = "";
            for (int j = i; j < s.size(); j++)
            {
                temp += s[j];
                if (checkPalindrome(temp) && temp.size() > ans.size())
                {
                    ans = temp;
                }
            }
        }
        return ans;
    }
};