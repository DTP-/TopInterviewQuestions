/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr)
            return false; // no cycle 
        
        ListNode* walker = head; // slow 
        ListNode* runner = head; // fast 
        
        // make sure nodes exist
        while(runner->next != nullptr && runner->next->next != nullptr){
            walker = walker->next; //slow 
            runner = runner->next->next; // fast 
            
            if(walker == runner) // check if they match
                return true;
        }
        return false;
    }
};