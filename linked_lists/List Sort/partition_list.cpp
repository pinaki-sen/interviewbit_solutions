/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    if(A==nullptr|| A->next==nullptr)
        return A;
    
    ListNode* less = nullptr;
    ListNode* grt_eql = A;
    ListNode* prev;
    ListNode* flag = nullptr;
    ListNode* headflag = nullptr;
    
    if(grt_eql->val>=B){
        
        prev = grt_eql;
        less = prev->next;
        
        while(less!=nullptr){
            if(less->val<B){
                ListNode* tmp = new ListNode(less->val);
                prev->next = less->next;
                if(flag==nullptr){
                    headflag = tmp;
                    flag = tmp;
                }
                else{
                    flag->next = tmp;
                    flag = tmp;
                }
            
                less = less->next;
            
            }
            else{
                prev = prev->next;
                less = less->next;
            }
        }
    
        if(headflag!=nullptr){
            flag->next = grt_eql;
            A = headflag;
        }
    }
    
    else{
        
        while(grt_eql->next->val < B)
            grt_eql = grt_eql->next;
            if(grt_eql->next==nullptr)
                return A;
        
        prev = grt_eql->next;
        less = prev->next;
    

    
        while(less!=nullptr){
            if(less->val<B){
                ListNode* tmp = new ListNode(less->val);
                prev->next = less->next;
                if(flag==nullptr){
                    headflag = tmp;
                    flag = tmp;
                }
                else{
                    flag->next = tmp;
                    flag = tmp;
                }
            
                less = less->next;
            
            }
            else{
                prev = prev->next;
                less = less->next;
            }
        }
    
        if(headflag!=nullptr){
            flag->next = grt_eql->next;
            grt_eql->next = headflag;
        }
    }
    
    return A;
}
