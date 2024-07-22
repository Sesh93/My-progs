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
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode *rabbit=head;
        ListNode *turtle=head;
        ListNode *previous=nullptr;
        if(head->next==nullptr)
        {
            return previous;
        }    
        while(rabbit!=nullptr&&rabbit->next!=nullptr)
        {
            previous=turtle;
            rabbit=rabbit->next->next;
            turtle=turtle->next;
        }
        previous->next=turtle->next;
        return head;
    }
    
};