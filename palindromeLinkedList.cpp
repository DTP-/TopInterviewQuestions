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
    bool isPalindrome(ListNode* head) {
        // a stack is first in last out,
        // traversing a list is quasi-first in first out 
        stack<ListNode*> nodeStack;    
        
        ListNode* pHead = head;
        // while pHead exists
        while(pHead){
            nodeStack.push(pHead); // add pHead to the stack
            pHead = pHead->next; // move pHead along by 1
        }
        
        // while the head exists
        while(head){
            // going forward on the linked list
            // backwards via the stack
            if(head->val != nodeStack.top()->val){
                return false; // start and end aren't equal, NOT palindrome
            }
            nodeStack.pop(); // similiar to head->next but in reverse
            head = head->next; // move head along by 1
        }
        return true;
        // if we get to the end of the linked list and the values
        // in the stack didn't differ from those of the linked list,
        // then it is a palindrome 
    }
};