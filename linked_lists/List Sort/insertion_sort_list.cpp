/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<vector>
#include<algorithm>
ListNode* Solution::insertionSortList(ListNode* A) {
    
    if(A==nullptr)
    return A;
    if(A->next == nullptr)
    return A;
    vector<int>ans;
    ListNode* temp = A;
    while(temp!=nullptr){
        ans.push_back(temp->val);
        temp = temp->next;
    }
    
    sort(ans.begin(), ans.end());
    
    temp = A;
    
    int i=0;
    
    while(temp!=nullptr){
        temp->val = ans[i];
        i++;
        temp = temp->next;
    }
    return A;
    
}