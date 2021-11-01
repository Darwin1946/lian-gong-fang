/**
 * Definition for singly-linked list.

 */
 struct ListNode {
      int val;
      struct ListNode *next;
  };

struct ListNode* middleNode(struct ListNode* head){
    int num = 0;
    struct ListNode *p = head;
    while (p)
    {
        p=p->next;
        num++;
    }
    int mid = num/2;
    for (int i = 0; i <= mid; i++)
    {
        head=head->next;

    }
    return head;
}