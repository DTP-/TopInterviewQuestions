// write a function to delete a node on a singly-linked list,
// will not be given access to the head of the list 
// INSTEAD: given access to the node to be deleted directly

// guranteed that the node to be deleted is NOT a tail node in the list

// 4 -> 5 -> 1 -> 9

// new list: 4 -> 1 -> 9

// INPUT: head=[4,5,1,9], node=5
// OUTPUT: [4,1,9]

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
    void deleteNode(ListNode* node) {
        *node = *node->next; // doesn't free memory
    }
};