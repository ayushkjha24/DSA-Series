// Problem link: https://leetcode.com/problems/roman-to-integer/
// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution
{
public:
    int num(char c)
    {
        switch (c)
        {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        default:
            return 1000;
            break;
        }
    }

    int romanToInt(string s)
    {
        int sum = 0, i = 0;
        while (i < s.size() - 1)
        {
            if (num(s[i]) < num(s[i + 1]))
            {
                sum -= num(s[i]);
            }
            else
                sum += num(s[i]);
            i++;
        }
        sum += num(s[i]);
        return sum;
    }
};