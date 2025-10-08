// Problem Link - https://leetcode.com/problems/rotate-string/description/
// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        int n=s.size();
        string str=s+s;
        return str.find(goal) != string::npos;
    }
};