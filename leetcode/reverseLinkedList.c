/* 
 Reverse a singly linked list.
 */

/**
   * Definition for singly-linked list.
    * struct ListNode {
     *     int val;
      *     struct ListNode *next;
       * };
        */
struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL || head->next == NULL)
    {                      
        return head;
    }
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* next;

    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    } 
    return head = prev;
}
