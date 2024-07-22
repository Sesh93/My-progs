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
    int listCount(ListNode *head)
    {
        int cnt=0;
        ListNode *i = head;
        while(i!=nullptr)
        {
            cnt++;
            i=i->next;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==nullptr || head->next==nullptr)
            return head;
        k = k%(listCount(head));
        ListNode *temp = head;
        while(k--)
        {
            temp=temp->next;
        }
        ListNode *p1 = temp;
        ListNode *p2 = head;
        while(p1->next!=nullptr)
        {
            p1=p1->next;
            p2=p2->next;
        }
        p1->next=head;
        head=p2->next;
        p2->next=nullptr;
        return head;
    }
};