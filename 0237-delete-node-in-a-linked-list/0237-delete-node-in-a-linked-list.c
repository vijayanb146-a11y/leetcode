/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    typedef struct ListNode lnode;
    lnode* temp=node->next;
    node->val=temp->val;
    node->next=temp->next;

    
}