// Problem Link: https://leetcode.com/problems/sort-list/description/
// Time Complexity: O(NlogN) + O(N) + O(N) ~ O(NlogN)
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
    ListNode *sortList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        vector<int> v;
        struct ListNode *temp = head;
        while (temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        sort(v.begin(), v.end());
        temp = head;
        int i = 0;
        while (temp)
        {
            temp->val = v[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};