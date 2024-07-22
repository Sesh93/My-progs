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
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode *rabbit=head;
        ListNode *turtle=head;
        while(rabbit!=nullptr && rabbit->next!=nullptr)
        {
            rabbit=rabbit->next->next;
            turtle=turtle->next;
            if(rabbit==turtle)
            {
                ListNode *pt1=head;
                ListNode *pt2=turtle;
                while(pt1!=pt2)
                {
                    pt1=pt1->next;
                    pt2=pt2->next;
                }
                return pt1;
            }
        }    
        return nullptr;
    }
};