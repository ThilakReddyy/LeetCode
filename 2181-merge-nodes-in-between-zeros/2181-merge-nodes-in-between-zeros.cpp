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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* p=new ListNode(-1);
        ListNode* temp=p;
        head=head->next;
        int sum=0;
        while(head)
        {
            if(head->val==0)
            {
                temp->next=new ListNode(sum);
                temp=temp->next;
                
                sum=0;
            }
            else
            {
                sum=sum+head->val;
            }
            head=head->next;
        }
        return p->next;
    }
};