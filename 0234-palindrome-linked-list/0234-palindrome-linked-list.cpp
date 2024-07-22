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
    ListNode* middleNode(ListNode* head)
    {
        ListNode *rabbit = head;
        ListNode *turtle = head;
        while(rabbit!=nullptr && rabbit->next!=nullptr)
        {
            rabbit=rabbit->next->next;
            turtle=turtle->next;
        }
        return turtle;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode *current=head,*previous=nullptr,*nextu=nullptr;
        while(current!=nullptr)
        {
            nextu=current->next;
            current->next=previous;
            previous=current;
            current=nextu;
        }
        head=previous;
        return head;
    }
    bool isPalindrome(ListNode* head) 
    {
        ListNode *t1 = head;
        ListNode *t2 = reverse(middleNode(head));
        while(t1!=nullptr && t2!=nullptr)
        {
            if(t1->val!=t2->val)
                return false;
            t1=t1->next;
            t2=t2->next;
        }
        return true;
    }
};