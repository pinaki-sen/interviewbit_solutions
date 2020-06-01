

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
    ListNode* Solution::sortList(ListNode* A) {
        ListNode* temp = A;
        vector<int>S;
        
        while(temp!=nullptr){
            S.push_back(temp->val);
            temp = temp->next;
        }
        
        sort(S.begin(), S.end());
        
        temp = A;
        for(int x:S){
            temp->val = x;
            temp = temp->next;
        }
        return A;
    }

