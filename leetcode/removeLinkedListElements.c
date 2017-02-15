/*
Remove all elements from a linked list of integers that have value val.



   */

/**
   * Definition for singly-linked list.
    * struct ListNode {
     *     int val;
      *     struct ListNode *next;
       * };
        */
struct ListNode* removeElements(struct ListNode* head, int val)
{
    if (head == NULL)
    {
        return head;
    }
    struct ListNode *curr = head;
    struct ListNode *prev = head;
    struct LIstNode *temp = head;

    while(curr != NULL)
    {
        if(head->val == val)
        {
            temp = head;
            head = head->next;
            free(temp);
        }
        else if( curr->val == val)
        {
            temp = curr;
            prev->next = curr->next;
            free(temp);
        }
        else
        {
            prev = curr;
        }
        curr = curr->next;
    }
    return head;                            
}
