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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
    if(list1==NULL && list2==NULL)
        return NULL;
    ListNode *head=NULL;
    ListNode *t3=NULL;
    while(list1 && list2)
    {
        int val=0;
        if(list1->val < list2->val)
        {
            val=list1->val;
            list1=list1->next;
        }
        else
        {
            val=list2->val;
            list2=list2->next;
        }
        ListNode *temp=new ListNode;
         temp->val=val;
        temp->next=NULL;
        if(head==NULL)
        {
            head=t3=temp;
            
        }
        else
        {
            t3->next=temp;
            t3=t3->next;
        }

        
    }
        while(list1)
        {
        ListNode *temp=new ListNode;
        temp->val=list1->val;
        temp->next=NULL;
        if(head==NULL)
        {
            head=t3=temp;
            
        }
        else
        {
            t3->next=temp;
            t3=t3->next;
        }
            list1=list1->next;
        }
        while(list2)
        {
            ListNode *temp=new ListNode;
         temp->val=list2->val;
        temp->next=NULL;
        if(head==NULL)
        {
            head=t3=temp;
            
        }
        else
        {
            t3->next=temp;
            t3=t3->next;
        }
            list2=list2->next;
        }
    return head;
}
};