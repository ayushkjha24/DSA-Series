// Problem Link: https://leetcode.com/problems/odd-even-linked-list/description/
// Time Complexity: O(N)
// Space Complexity: O(1)

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
    ListNode *deleteMiddle(ListNode *head)
    {
        int n = 0;
        struct ListNode *temp = head;
        while (temp)
        {
            n++;
            temp = temp->next;
        }
        n /= 2;
        temp = head;
        while (n > 1)
        {
            temp = temp->next;
            n--;
        }
        if (temp && temp->next)
            temp->next = temp->next->next;
        else
            head = NULL;
        return head;
    }
};