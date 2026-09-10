/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void push (int *stack, int *top, int value)
{
    (*top)++;
    stack[*top]=value;
}
void pop (int *top)
{
    (*top)--;
}
bool isPalindrome(struct ListNode* head) {
    struct ListNode* temp;
    temp=head;
    int top=-1;
    int stack[100001];
    struct ListNode *fast=head, *slow=head;
    if (head==NULL || head->next==NULL)
    {
        return true;
    }
    while (temp!=NULL)
    {
        if (fast==NULL || fast->next==NULL)
        {   
            if (top!=-1 && temp->val==stack[top])
            {
                pop(&top);
            }
        }
        else 
        {
            slow=slow->next;
            fast=(fast->next)->next;
            push(stack,&top,temp->val);
        }
        temp=temp->next;
    }
    if (top==-1)
    {
        return true;
    }
    return false;
}