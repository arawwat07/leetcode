/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *prev=NULL, *nxt=NULL, *temp1=list1, *temp=list2;
    if (list1==NULL && list2==NULL)
    {
        return NULL;
    }
    else if (list1==NULL)
    {
        return list2;
    }
    else if (list2==NULL)
    {
        return list1;
    }
    while (list1!=NULL && list2!=NULL)
    {
        if (list1->val<=list2->val)
        {
            prev=list1;
            list1=list1->next;
        }
        else if (list1->val>list2->val)
        {
            if (prev==NULL)
            {
                temp1=list2;
                prev=list2;
            }
            nxt=list2->next;
            prev->next=list2;
            list2->next=list1;
            prev=list2;
            list2=nxt;
        }
    }
    if (list2==NULL)
    {
        return temp1;
    }
    prev->next=list2;
    return temp1;
}