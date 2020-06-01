/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    
    ListNode *head, *temp;
    if(A->val < B->val){
        head = new ListNode(A->val);
        temp = head;
        A = A->next;
    }
    else{
        head = new ListNode(B->val);
        temp = head;
        B = B->next;
    }
    
    while(A!=nullptr || B!=nullptr){
        if(A==nullptr){
            while(B!=nullptr){
                ListNode* a = new ListNode(B->val);
                temp->next = a;
                B = B->next;
                temp = temp->next;
            }
        }
        else if(B==nullptr){
            while(A!=nullptr){
                ListNode* a = new ListNode(A->val);
                temp->next = a;
                A = A->next;
                temp = temp->next;
            }
        }
        else if(A->val <= B->val){
            ListNode* a = new ListNode(A->val);
            temp->next = a;
            A = A->next;
            temp = temp->next;
        }
        else{
            ListNode* a = new ListNode(B->val);
            temp->next = a;
            B = B->next;
            temp = temp->next;
        }
    }
    
    
    
    return head;
    
    
    
}
