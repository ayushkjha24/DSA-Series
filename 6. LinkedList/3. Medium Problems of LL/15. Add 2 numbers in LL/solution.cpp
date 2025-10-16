// Problem Link: https://leetcode.com/problems/add-two-numbers/
// Time Complexity: O(max(m, n)) where m and n are the lengths of the two lists
// Space Complexity: O(max(m, n)) for the output list

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // Dummy node to simplify list construction
        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = x + y + carry;

            carry = sum / 10;
            int digit = sum % 10;

            curr->next = new ListNode(digit);
            curr = curr->next;

            if (l1 != nullptr)
                l1 = l1->next;
            if (l2 != nullptr)
                l2 = l2->next;
        }

        return dummy->next;
    }
};