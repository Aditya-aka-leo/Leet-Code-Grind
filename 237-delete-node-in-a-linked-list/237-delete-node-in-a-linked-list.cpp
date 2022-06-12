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
    void deleteNode(ListNode* node)
    {
        ListNode *af=node->next;

        while(af->next != nullptr)        
        {
            int temp=node->val;
            node->val=af->val;
            af->val=temp;
            af=af->next;
            node=node->next;

        }
        int temp=node->val;
            node->val=af->val;
            af->val=temp;
        delete(af);
        node->next=NULL;
        
    }
};