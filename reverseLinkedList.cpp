// RECURSIVE

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
    ListNode* reverseList(ListNode* head) {
        if(!head || !(head->next)) // if head or node after head is nullptr
            return head; // return the NULL head
        
        ListNode* node = reverseList(head->next); // recursive on next node 
        
        head->next->next = head;
        
        head->next = NULL;
        
        return node;
    }
};