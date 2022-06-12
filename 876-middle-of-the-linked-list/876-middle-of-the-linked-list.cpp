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
        ListNode *p=head;
        int size=0;
        while(p!=NULL)
        {
            size++;
            p=p->next;
        }
        int temp=size/2;
        while(temp!=0)
        {
            head=head->next;
            temp--;
        }
        return head;


    }
};