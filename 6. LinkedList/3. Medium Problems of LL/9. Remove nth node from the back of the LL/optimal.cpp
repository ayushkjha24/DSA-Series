// Problem Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Time Complexity: O(L) where L is the length of the linked list
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        struct ListNode *fast = head;
        for (int i = 0; i < n; i++)
            fast = fast->next;
        if (fast == NULL)
        {
            struct ListNode *ans = head->next;
            delete (head);
            return ans;
        }
        struct ListNode *slow = head;
        while (fast->next)
        {
            slow = slow->next, fast = fast->next;
        }
        struct ListNode *delNode = slow->next;
        if (slow->next == NULL)
            slow->next = NULL;
        else
            slow->next = slow->next->next;
        delete (delNode);
        return head;
    }
};