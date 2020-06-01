/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<stack>
int Solution::lPalin(ListNode* A) {
    int l = 0;
    ListNode* temp = A;
    while(temp!=nullptr){
        temp = temp->next;
        l++;
    }
    
    stack<int>s;
    temp = A;
    for(int i=0;i<l/2;i++){
        s.push(temp->val);
        temp = temp->next;
    }
    
    if(l%2!=0)
    temp = temp->next;
    
    while(temp!= nullptr){
        if(temp->val != s.top())
        return 0;
        s.pop();
        temp = temp->next;
        
        
    }
    return 1;
}
