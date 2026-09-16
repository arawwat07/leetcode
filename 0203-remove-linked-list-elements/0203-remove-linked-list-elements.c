/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *temp, *prev;
    if (head==NULL)
    {
        return NULL;
    }
    while (head!=NULL && head->val==val)
    {
        head=head->next;
    }
    if (head==NULL)
    {
        return NULL;
    }
    temp=head->next;
    prev=head;
    if (temp==NULL)
    {
        return prev;
    }
    while (temp!=NULL)
    {
        if (temp->val!=val)
        {
            prev->next=temp;
            prev=temp;
            temp=temp->next;
        }
        else if (temp->val==val)
        {
            temp=temp->next;
        }
    }
    prev->next=NULL;
    return head;
}