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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* h1 = head;
        ListNode* h2 = head;
        
        while(n-->0)
            h2 = h2->next;
        
        if(h2 == nullptr)
            return head->next; // !!! head needs to be removed, do it
        
        h2 = h2->next;
        
        while(h2 != nullptr){
            h1 = h1->next;
            h2 = h2->next;
        }
        
        h1->next = h1->next->next; // one after h1 needs to be removed
        
        return head;
    }
};