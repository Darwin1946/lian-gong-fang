/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include<stdio.h>
  struct ListNode {
      int val;
     struct ListNode *next;
  };

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int num = 0;
    struct ListNode* p=head;
    while (p)
    {
        num++;
        p=p->next;
    }
    if (num==1)
    {
        return NULL;
    }
    
    int target = num-n;
    struct ListNode* p2=malloc(sizeof(struct ListNode));
    p2->val=0;
    p2->next=head;
    p=p2;
    for (int i = 0; i < target; i++)
    {
        p=p->next;
    }
    p->next=p->next->next;
    struct ListNode* ans = p2->next;
    free(p2);
    return ans;
}