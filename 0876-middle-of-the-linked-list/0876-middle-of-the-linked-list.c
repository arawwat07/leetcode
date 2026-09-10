/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp;
    temp=head;
    int count=1;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    count=((count-1)/2)+1;
    int i=1;
    while (i<count)
    {
        head=head->next;
        i++;
    }
    return head;
}