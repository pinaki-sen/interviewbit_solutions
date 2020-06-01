/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* head = A;
    if(A==nullptr){
        return nullptr;
    }
    if(A->next==nullptr){
        return A;
    }
    if(head->val==head->next->val){
        int flag = head->next->val;
        while(head->val==flag){
            head = head->next;
            if(head==nullptr)
            return nullptr;
        }
        
    }
    ListNode* prev = head;
    head = new ListNode(-1);
    head->next = prev;
    prev = head;
    while(prev->next->next!=nullptr){
        if(prev->next->val!=prev->next->next->val){
            prev = prev->next;
        }
        else{
            int flag = prev->next->val;
            ListNode *temp = prev->next->next;
            while(temp->val==flag){
                temp = temp->next;
                if(temp==nullptr)
                break;
            }
            prev->next = temp;
            if(prev->next==nullptr)
            return head->next;
        }
    }
    return head->next;
    
}