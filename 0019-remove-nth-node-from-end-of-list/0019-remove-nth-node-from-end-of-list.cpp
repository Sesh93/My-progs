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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int cnt=0;
        ListNode *i = head;
        if(head==nullptr)
            return nullptr;
        
        while(i!=nullptr)
        {
            cnt++;
            i=i->next;
        }     
        if(cnt==n)
        {
            head=head->next;
            return head;
        }
        n=cnt-n;
        int pos=1;
        ListNode *curr=head;
        while(pos!=n)
        {
            pos++;
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
    }
};