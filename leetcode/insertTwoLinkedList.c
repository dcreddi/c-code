/*
Write a program to find the node at which the intersection of two singly linked lists begins.

   */
/**
   * Definition for singly-linked list.
    * struct ListNode {
     *     int val;
      *     struct ListNode *next;
       * };
        */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    if (headA == NULL || headB == NULL)
        return NULL;    
    struct ListNode *t1 = headA;
    struct ListNode *t2 = headB;                
    int l1 = 0;
    int l2 = 0;
    int d = 0;
    while(t1 != NULL)
    {
        l1++;
        t1 = t1->next;
    }

    while (t2 != NULL)
    {
        l2++;
        t2 = t2->next;
    }

    t1 = headA;
    t2 = headB;

    if (l1 > l2)
    {
        d = (l1 - l2);
        int i = 0;
        while(i < d)
        {
            t1 = t1->next;
            i++;
        }
    }
    else
    {
        d = (l2 - l1);
        int i = 0;
        while(i < d)
        {
            t2 = t2->next;
            i++;
        }
    }
    while(t1 != NULL && t2 != NULL)
    {
        if(t1->val == t2->val)
            return t1;
        else
        {
            t1 = t1->next;
            t2 = t2->next;
        }
    }
    return NULL;
}
