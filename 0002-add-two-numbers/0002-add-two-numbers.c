/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *temp1=NULL, *temp2=NULL, *new, *head=NULL, *tail=NULL;
    temp1=l1;
    temp2=l2;
    int sum=0, carry=0;
    while (temp1!=NULL || temp2!=NULL || carry!=0)
    {
        new=(struct ListNode*)malloc(sizeof(struct ListNode));
        sum=carry;
        if (temp1!=NULL)
        {
            sum=sum+temp1->val;
            temp1=temp1->next;
        }
        if (temp2!=NULL)
        {
            sum=sum+temp2->val;
            temp2=temp2->next;
        }
        if (sum>9)
        {
            carry=sum/10;
            sum=sum%10;
            new->val=sum;
            new->next=NULL;
        }
        else 
        {
            carry=0;
            new->val=sum;
            new->next=NULL;
        }
        if (head==NULL)
        {
            head=new;
            tail=new;
        }
        else 
        {
            tail->next=new;
            tail=new;
        }
    }
    return head;
}