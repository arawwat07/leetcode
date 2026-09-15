/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *fast=head, *slow=head;
    int count=0, found=0;
    while (fast!=NULL && slow!=NULL)
    {
        if (fast->next == NULL || (fast->next)->next == NULL || slow->next == NULL)
        {
            return false;
        }
        fast=(fast->next)->next;
        slow=slow->next;
        if (fast == slow)
        {
            found=1;
            break;
        }
    }
    if (found==1)
    {
        slow=head;
        while (fast!=NULL && slow!=NULL)
        {
            if (fast==slow)
            {
                return slow;
            }
            fast=fast->next;
            slow=slow->next;
        }
    }
    return NULL;
}