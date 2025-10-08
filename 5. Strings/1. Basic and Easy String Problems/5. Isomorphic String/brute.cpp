// Problem Link : https://leetcode.com/problems/isomorphic-strings/description/
// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        unordered_map<char, char> mp1; // s → t
        unordered_map<char, char> mp2; // t → s

        for (int i = 0; i < s.size(); i++)
        {
            char a = s[i], b = t[i];

            // If already mapped, check consistency
            if (mp1.count(a) && mp1[a] != b)
                return false;
            if (mp2.count(b) && mp2[b] != a)
                return false;

            // Assign mapping
            mp1[a] = b;
            mp2[b] = a;
        }
        return true;
    }
};