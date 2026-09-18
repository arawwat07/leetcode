/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *fast=NULL, *slow=NULL, *temp=NULL, *new;
    slow=head;
    fast=head;
    temp=head;
    while (n>0)
    {
        fast=fast->next;
        n--;
    }
    if (fast==NULL)
    {
        new=head->next;
        return new;
    }
    while (fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    while (temp->next!=slow)
    {
        temp=temp->next;
    }
    temp->next=slow->next;
    temp=slow->next;
    while (temp!=NULL)
    {
        temp=temp->next;
    }
    return head;
}