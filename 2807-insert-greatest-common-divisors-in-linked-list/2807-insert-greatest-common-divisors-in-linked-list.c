/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode *nxt, *prev, *temp;
    if (head->next==NULL)
    {
        return head;
    }
    prev=head;
    nxt=head->next;
    int value;
    while (nxt!=NULL)
    {
        value=gcd(prev->val,nxt->val);
        temp=(struct ListNode *)malloc(sizeof(struct ListNode));
        temp->val=value;
        temp->next=NULL;
        prev->next=temp;
        temp->next=nxt;
        prev=nxt;
        nxt=nxt->next;
    }
    return head;
}