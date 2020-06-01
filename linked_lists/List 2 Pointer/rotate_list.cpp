/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    
    ListNode *head, *fast, *slow;
    if(A->next==nullptr){
        return A;
    }
    
    int l = 0;
    ListNode* temp = A;
    while(temp!=nullptr){
        temp = temp->next;
        l++;
    }
    B = B%l;
    if(B==0)
    return A;
    fast = A; slow = A;
    for(int i=0;i<B;i++){
        fast = fast->next;
    }
    
    while(fast->next!=nullptr){
        fast = fast->next;
        slow = slow->next;
    }
    
    head = slow->next;
    slow->next = nullptr;
    fast->next = A;
    return head;
}
