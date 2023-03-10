/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* Lhead;
    Solution(ListNode* head) {
        Lhead = head;
    }
    
    int getRandom() {
        
        int res = 1;
        int len = 1;
        
        ListNode* x = Lhead;
        
        while( x != NULL){
            
            if(rand() % len == 0){
                res = x->val;
            }
            
            len++;
            x = x->next;
        }
        
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
