// Problem Link: https://leetcode.com/problems/intersection-of-two-linked-lists/description/
// Time Complexity: O(N) + O(M) ~ O(N+M)
// Space Complexity: O(N) + O(M) ~ O(N+M)

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
        // If any list is empty, no intersection
        if (!headA || !headB)
            return nullptr;

        vector<ListNode *> v1, v2;

        // Traverse list A
        ListNode *it1 = headA;
        while (it1 != nullptr)
        {
            v1.push_back(it1);
            it1 = it1->next;
        }

        // Traverse list B
        ListNode *it2 = headB;
        while (it2 != nullptr)
        {
            v2.push_back(it2);
            it2 = it2->next;
        }

        int i = v1.size() - 1;
        int j = v2.size() - 1;

        ListNode *ans = nullptr;

        // Compare from the end
        while (i >= 0 && j >= 0 && v1[i] == v2[j])
        {
            ans = v1[i];
            i--;
            j--;
        }

        return ans;
    }
};