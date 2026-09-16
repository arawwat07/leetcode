/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *temp, *nxt;
    if (head==NULL)
    {
        return NULL;
    }
    temp=head;
    nxt=head->next;
    if (nxt==NULL)
    {
        return temp;
    }
    while (nxt!=NULL)
    {
        if (temp->val==nxt->val)
        {
            nxt=nxt->next;
        }
        else if (temp->val!=nxt->val)
        {
            temp->next=nxt;
            temp=nxt;
            nxt=nxt->next;
        }
    }
    temp->next=NULL;
    return head;
}