// Problem link : https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1
// Time Complexity: O(N)
// Space Complexity: O(1)

/*
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};
*/
struct Node *reverse(struct Node *head)
{
    if (head == NULL || head->next == NULL)
        return head; // empty or single node

    struct Node *curr = head;
    struct Node *temp = NULL;

    while (curr != NULL)
    {
        // swap prev and next pointers
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        // move to next node (which is prev now)
        curr = curr->prev;
    }

    // after the loop, temp points to the previous node of NULL
    if (temp != NULL)
    {
        head = temp->prev;
    }

    return head;
}
