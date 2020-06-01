/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    int carry = 0;
    ListNode *head, *temp;
    head = nullptr;
    temp = nullptr;
    while(A!=nullptr || B!=nullptr){
        if(A==nullptr){
            int sum = B->val+carry;
            ListNode* a = new ListNode(sum%10);
            carry = sum/10;
            temp->next = a;
            temp = temp->next;
            B = B->next;
            
        }
        else if(B==nullptr){
            int sum = A->val + carry;
            ListNode* a = new ListNode(sum%10);
            carry = sum/10;
            temp->next = a;
            temp = temp->next;
            A = A->next;
            
        }
        
        else{
            int sum = A->val + B->val + carry;
            ListNode* a = new ListNode(sum%10);
            carry = sum/10;
            A = A->next;
            B = B->next;
            if(head==nullptr){
                head = a;
                temp = head;
            }
            else{
                temp->next = a;
                temp = a;
            }
        }
    }
    
    if(carry!=0){
        ListNode* a = new ListNode(carry);
        temp->next = a;
    }
    return head;
}
