// Problem Link : https://leetcode.com/problems/intersection-of-two-linked-lists/description/
// Time Complexity: O(N + M)
// Space Complexity: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (!headA || !headB)
            return nullptr;

        ListNode *a = headA;
        ListNode *b = headB;

        // Traverse both lists. When one reaches the end, switch to the other list.
        // They will meet at intersection or both end up at NULL.
        while (a != b)
        {
            a = (a == nullptr) ? headB : a->next;
            b = (b == nullptr) ? headA : b->next;
        }

        return a;
    }
};