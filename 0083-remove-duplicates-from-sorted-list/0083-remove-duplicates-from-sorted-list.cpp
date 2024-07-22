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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode *i = head;
        while(i!=nullptr&&i->next!=nullptr)
        {
            if(i->val==i->next->val)
                i->next=i->next->next;
            else
                i=i->next;
        }
        return head;
    }
};