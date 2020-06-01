/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<vector>
ListNode* Solution::reorderList(ListNode* A) {
    ListNode *head;
    head = A;
    if(head==nullptr)
    return head;;
    
    if(head->next==nullptr)
    return head;
    
    if(head->next->next==nullptr)
    return head;
    
    
    vector<int>ans;
    ListNode *temp;
    temp = head;
    
    while(temp!=nullptr){
        ans.push_back(temp->val);
        temp = temp->next;
    }
    
    int l = ans.size();
    temp = head;
    
    
    
    int i, j;
    i=0;
    while(temp!=nullptr){
        temp->val = ans[i];
        temp = temp->next;
        if(temp==nullptr)
        return head;
        j = (l-1)-i;
        i++;
        temp->val = ans[j];
        temp = temp->next;
        
        
    }
    return head;
}
