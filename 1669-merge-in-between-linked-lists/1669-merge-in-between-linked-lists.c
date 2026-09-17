/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode *nxt, *temp;
    int count=0;
    temp=list1;
    if (list1==NULL)
    {
        return NULL;
    }
    if (a==b)
    {
        while (count!=a-1)
        {
            temp=temp->next;
            nxt=temp->next;
            count++;
        }
        if (temp==list1)
        {
            nxt=temp->next;
        }
        temp->next=list2;
        temp=list2;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=nxt->next;
        temp=nxt->next;
        while (temp!=NULL)
        {
            temp=temp->next;
        }
        return list1;     
    }
    while (count!=a-1)
    {
        temp=temp->next;
        nxt=temp;
        count++;
    }
    while (count!=b+1)
    {
        nxt=nxt->next;
        count++;
    }   
    temp->next=list2;
    temp=list2;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=nxt;
    temp=nxt;
    while (temp!=NULL)
    {
        temp=temp->next;
    }
    return list1;
}