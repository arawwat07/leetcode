/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode *fast=NULL, *slow=NULL, *temp=NULL;
    slow=head;
    fast=head;
    temp=head;
    if (head==NULL || head->next==NULL)
    {
        return NULL;
    }
    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    while (temp->next!=slow)
    {
        temp=temp->next;
    }
    temp->next=slow->next;
    temp=slow->next;
    return head;
}