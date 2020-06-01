/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *f, *b;
    f = A;
    b = A;
    for(int i=0;i<B;i++){
        if(f->next==nullptr){
            A = A->next;
            return A;
        }
        f = f->next;
    }
    while(f->next!=nullptr){
        f = f->next;
        b = b->next;
    }
    
    b->next = b->next->next;
    return A;
    
    
}
