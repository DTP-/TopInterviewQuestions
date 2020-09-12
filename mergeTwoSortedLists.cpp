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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(INT_MIN);
        ListNode *tail = &dummy;
        
        // while list 1 and 2 exist
        while(l1 && l2){
            if(l1->val < l2->val){
                tail->next = l1; // assign element after tail, to l1
                l1 = l1->next; // move l1 along 
            }else{
                tail->next = l2; // assign element after tail, to l2
                l2 = l2->next; // move l2 along 
            }
            tail = tail->next; // move tail along 
        }
        tail->next = l1 ? l1 : l2;
        return dummy.next;
    }
};