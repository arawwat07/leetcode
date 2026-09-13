/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *temp1=headA, *temp2=headB, *intersectVal=NULL;
    int countA=0, countB=0, i=0;
    while (temp1!=NULL)
    {
        countA++;
        temp1=temp1->next;
    }
    while (temp2!=NULL)
    {
        countB++;
        temp2=temp2->next;
    }
    temp1=headA;
    temp2=headB;
    if (countA>countB)
    {
        for (i=0; i<countA-countB; i++)
        {
            temp1=temp1->next;
        }
    }
    else if (countA<countB)
    {
        for (i=0; i<countB-countA; i++)
        {
            temp2=temp2->next;
        }
    }
    while (temp1!=NULL && temp2!=NULL)
    {
        if (temp1 == temp2)
        {
            intersectVal=temp1;
            return intersectVal;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return intersectVal;
}