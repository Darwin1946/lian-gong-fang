
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* l3 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* p1 = l1, * p2 = l2; 
    struct ListNode* r3 = l3;
    while(p1 && p2){
        if((p1 -> val) <= ( p2 -> val)){
            r3 -> next = p1;
            r3 = p1;
            p1 = p1 -> next;
        }
        else{
          
          r3 -> next = p2;
          r3 = p2; 
          p2 = p2->next;
        }
    }
    if(!p1)
       { r3 -> next = p2 ; }
    else if(!p2)
        { r3 -> next = p1; } 
    return l3->next;
}