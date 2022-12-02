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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(-1);
        dummy -> next = head;
        // ListNode* dummy ;
        ListNode* next=head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        
        while(curr){
            next = curr->next;
            if(curr->val==val){
                prev->next=next;
            } else{
                prev=curr;
            }
            curr = next;
        }
        return dummy->next ;
    }
};
