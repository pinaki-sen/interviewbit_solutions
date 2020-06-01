/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode* head){
    ListNode *current, * prev, * next;
    current = head;
    prev = nullptr;
    while(current!=nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    
    ListNode *first, *firstprev, *last, *lastnext, *temp;
    
    int l = 0;
    temp = A;
    while(temp!=nullptr){
        temp = temp->next;
        l++;
    }
    
    if(B==1 && C==1)
    return A;
    if(B==1 && C==l)
    return reverse(A);
    
    if(B==1){
        temp = A;
        for(int i=0;i<C-1;i++){
            temp = temp->next;
        }
        last = temp;
        lastnext = last->next;
        
        last->next = nullptr;
        temp = reverse(A);
        A->next = lastnext;
        return temp;
        
    }
    
    if(C==l){
        temp = A;
        for(int i=0;i<B-2;i++){
            temp = temp->next;
        }
        firstprev = temp;
        first = firstprev->next;
        
        firstprev->next = reverse(first);
        return A;
        
    }
    
    temp = A;
    for(int i=0;i<B-2;i++){
        temp = temp->next;
    }
    firstprev = temp;
    first = firstprev->next;
    
    temp = A;
    for(int i=0;i<C-1;i++){
        temp = temp->next;
    }
    last = temp;
    lastnext = last->next;
    
    last->next = nullptr;
    
    firstprev->next = reverse(first);
    
    first->next = lastnext;
    
    return A;
    
}
