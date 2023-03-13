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
        ListNode*t=head;
        int s=0;
        while(t!=NULL){
            s++;
            t=t->next;
        }
        if(s==0){
            return NULL;
        }
        if(s==n){
            return head->next;
        }
        int e=s-n;
        s=0;
        t=head;
        while(t){
            s++;
            if(s==e){
                t->next=t->next->next;
            }
          t=t->next;
        }
   return head; }
};
