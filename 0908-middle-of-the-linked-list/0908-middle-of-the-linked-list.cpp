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
        int size=sizeNode(head);
        int count=0;
        ListNode *current=head;
        while(count!=((size/2)))
        {
            count++;
            current=current->next;
        }
        return current;
    }
    int sizeNode(ListNode *head)
    {
        ListNode *current=head;
        int size=0;
        if(current==nullptr)
            return 0;
        if(current->next==nullptr)
            return 1;
        while(current!=nullptr)
        {
            size++;
            current=current->next;
        }
        return size;
    }
};