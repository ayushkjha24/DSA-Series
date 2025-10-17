// Problem Link: https://leetcode.com/problems/linked-list-cycle-ii/
// Time Complexity: O(N)
// Space Complexity: O(N)

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
    ListNode *detectCycle(ListNode *head)
    {
        unordered_map<ListNode *, int> mp;
        struct ListNode *temp = head;
        while (temp != NULL)
        {
            if (mp.count(temp) != 0)
                return temp;
            mp[temp] = 1;
            temp = temp->next;
        }
        return NULL;
    }
};