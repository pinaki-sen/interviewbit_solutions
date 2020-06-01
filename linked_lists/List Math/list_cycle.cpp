/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    
    ListNode* flag = new ListNode(-1);
    ListNode* temp = A;
    while(temp != nullptr){
        if(temp->next == flag){
            return temp;
        }
        if(temp->next==nullptr){
            return nullptr;
        }
        ListNode *a = temp;
        temp = temp->next;
        a->next = flag;
    }
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
