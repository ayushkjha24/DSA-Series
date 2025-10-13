// Problem link : https://www.geeksforgeeks.org/problems/delete-head-of-doubly-linked-list/1
// Time Complexity: O(1)
// Space Complexity: O(1)

// User function Template for C

struct Node *deleteHead(struct Node *head)
{
    head = head->next;
    head->prev = NULL;
    return head;
}