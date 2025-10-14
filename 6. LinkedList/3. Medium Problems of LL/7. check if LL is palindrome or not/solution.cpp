// Problem Link: https://leetcode.com/problems/palindrome-linked-list/description/
// Time Complexity: O(N)
// Space Complexity: O(N)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        string s = "";
        ListNode *temp = head;
        while (temp)
        {                              // include last node too
            s += to_string(temp->val); // correct conversion
            temp = temp->next;
        }
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};