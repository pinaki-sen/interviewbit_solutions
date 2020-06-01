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
#include<stack>
ListNode* Solution::reverseList(ListNode* A, int B) {
    
    ListNode *newhead=nullptr, *C=nullptr;
    
    ListNode* temp = A;
    while(temp!=nullptr){
        stack<int>s;
        for(int i=0;i<B;i++){
            s.push(temp->val);
            temp = temp->next;
        }
        
        if(C==nullptr){
            C = new ListNode(s.top());
            s.pop();
            newhead = C;
            while(!s.empty()){
                newhead->next = new ListNode(s.top());
                s.pop();
                newhead = newhead->next;
            }
        }
        else{
            while(!s.empty()){
                newhead->next = new ListNode(s.top());
                s.pop();
                newhead = newhead->next;
            }
        }
        
    }
    return C;
}
