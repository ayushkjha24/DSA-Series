// Problem link: https://leetcode.com/problems/reverse-words-in-a-string/
// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        int n = s.size();
        int i = 0;

        while (i < n)
        {
            // skip spaces
            while (i < n && s[i] == ' ')
                i++;

            if (i >= n)
                break;

            int j = i;
            while (j < n && s[j] != ' ')
                j++;

            words.push_back(s.substr(i, j - i)); // collect word
            i = j;
        }

        // reverse order of words
        reverse(words.begin(), words.end());

        // join with single space
        string ans;
        for (int k = 0; k < words.size(); k++)
        {
            if (k > 0)
                ans += ' ';
            ans += words[k];
        }

        return ans;
    }
};