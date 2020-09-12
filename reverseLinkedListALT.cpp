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
    // 1->2->3->4->5
    // becomes 0->1->2->3->4->5
    // Initialise pre->val to be 0
    
    // set pointer cur to head
    // keep inserting cur->next after pre until cur becomes the last node
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = new ListNode(0);
        ListNode *cur = head;
        
        pre->next = head;
        
        while(cur && cur->next){
            ListNode* temp = pre->next;
            
            pre->next = cur->next; // insert cur->next after pre
            cur->next = cur->next->next;
            pre->next->next = temp;
        }
        return pre->next;
    }
};