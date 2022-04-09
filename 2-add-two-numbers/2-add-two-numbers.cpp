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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,a;
        ListNode *temp=l1,*prev=l1;
        while(l1 || l2)
        {
            prev=l1;
            if(!l1->next && l2)
            {
                l1->next=l2->next;
                l2->next=NULL;
            }
            if(!l2)
            {
                a=l1->val+carry;
                l1->val=a%10;
                carry=a/10;
                l1=l1->next;
            }
            else
            {
             a=l1->val+l2->val+carry;
                l1->val=a%10;
                carry=a/10;
                l1=l1->next;
                l2=l2->next;
            }
        
            
        }
        if(carry==1)
        {
            prev->next=new ListNode(1);
        }
        return temp;
    }
};