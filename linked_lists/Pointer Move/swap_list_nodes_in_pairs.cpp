/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    
    ListNode *prev=nullptr, *curr=A, *q;
    
    int counter = 2;
    while(counter-- && curr!=nullptr){
        q = curr->next;
        curr->next =prev;
        prev = curr;
        curr = q;
    }
    if(A!=nullptr){
        A->next = swapPairs(q);
    }
    return prev;
}