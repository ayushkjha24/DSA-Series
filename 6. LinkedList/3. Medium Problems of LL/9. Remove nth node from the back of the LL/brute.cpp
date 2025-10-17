// Problem Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Time Complexity: 2*O(L) where L is the length of the linked list
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
        int count = 0;
        struct ListNode *temp = head;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        int res = count - n;
        if (res == 0)
        {
            struct ListNode *ans = head->next;
            delete (head);
            return ans;
        }
        temp = head;
        while (temp->next != NULL)
        {
            res--;
            if (!res)
                break;
            temp = temp->next;
        }
        struct ListNode *delNode = temp->next;
        temp->next = temp->next->next;
        delete (delNode);
        return head;
    }
};