/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast=head, *slow=head;
    int count=0;
    while (fast!=NULL && slow!=NULL)
    {
        if (fast->next == NULL || (fast->next)->next == NULL || slow->next == NULL)
        {
            return false;
        }
        fast=(fast->next)->next;
        slow=slow->next;
        if (fast->val == slow->val)
        {
            count++;
            if (count<2)
            {
                continue;
            }
            else 
            {
                return true;
            }
        }
    }
    return false;
}