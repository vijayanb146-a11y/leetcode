/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    typedef struct ListNode node;
    int n=0;
    node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        n++;
    }
    n=n/2;
    node *index=head;
    for(int i=0;i<n;i++){
        index=index->next;
        
    }
    return index;

    
}