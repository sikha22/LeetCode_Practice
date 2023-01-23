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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int i=0;
        deque<ListNode*>q;
        ListNode* ans=new ListNode();
        ListNode* res=ans;
        while(head!=NULL)
        {
            q.push_back(head);
            head=head->next;
            q.back()->next=NULL; 
            i++;
            if(i==k)
            {
                //taking nodes in reversed order 
                for(int p=0;p<i;p++)
                {
                    ans->next=q.back();
                    q.pop_back();
                    ans=ans->next;
                }
                i=0;   
            }
        }
        while(!q.empty())
        {
            ans->next=q.front();
            ans=ans->next;
            q.pop_front();
        }
        return res->next;
    }
};
