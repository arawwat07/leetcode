/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode *temp, *trav, *join, *nxt=NULL;
    trav=head;
    join=head;
    int sum=0;
    while (trav!=NULL)
    {
        trav=trav->next;
        if (trav==NULL)
        {
            break;
        }
        temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        sum=0;
        while (trav!=NULL && trav->val!=0)
        {
            sum=sum+trav->val;
            trav=trav->next;
        }
        temp->val=sum;
        temp->next=NULL;
        if (nxt==NULL)
        {
            join=temp;
        }
        else
        {
            nxt->next=temp;
        }
        nxt=temp;
    }
    return join;
}