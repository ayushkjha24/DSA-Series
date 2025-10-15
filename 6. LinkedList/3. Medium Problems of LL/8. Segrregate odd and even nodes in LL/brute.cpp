// Problem Link - https://leetcode.com/problems/odd-even-linked-list/
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
    ListNode *oddEvenList(ListNode *head)
    {
        vector<int> odd;
        vector<int> even;
        struct ListNode *temp = head;
        int i = 1;
        while (temp)
        {
            if (i % 2)
                odd.push_back(temp->val);
            else
                even.push_back(temp->val);
            i++;
            temp = temp->next;
        }
        int j = 0;
        i = 0;
        temp = head;
        while (temp && i < odd.size())
        {
            temp->val = odd[i];
            i++;
            temp = temp->next;
        }
        while (temp && j < even.size())
        {
            temp->val = even[j];
            j++;
            temp = temp->next;
        }
        return head;
    }
};