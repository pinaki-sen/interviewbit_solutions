

    /**
     * Definition for singly-linked list.
     * struct ListNode {
     *     int val;
     *     ListNode *next;
     *     ListNode(int x) : val(x), next(NULL) {}
     * };
     */
    ListNode* Solution::deleteDuplicates(ListNode* A) {
        
        ListNode* temp = A;
        while(temp != nullptr){
            if(temp->next==nullptr)
            break;
            if(temp->val == temp->next->val){
                ListNode* flag = temp->next;
                while(flag->val == temp->val){
                    flag = flag->next;
                    if(flag==nullptr)
                    break;
                }
                temp ->next = flag;
            }
            temp = temp->next;
        }
        return A;
    }

