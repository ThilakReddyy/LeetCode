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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2,int count=0) {
        if(l1==NULL && l2!=NULL)
        {
            if(count>0)
            {
               ListNode* temp=l2;
                ListNode* prev=l2;
                while(temp && count>0)
                {
                    int p=temp->val+count;
                    temp->val=p%10;
                    count=p/10;
                    prev=temp;
                    temp=temp->next;
                }
                if(count>0)
                {
                    prev->next=new ListNode(count);
                }
            }
            return l2;
        }
        if(l2==NULL && l1!=NULL)
        {
            if(count>0)
            {
                ListNode* temp=l1;
                ListNode* prev=l1;
                while(temp && count>0)
                {
                    int p=temp->val+count;
                    temp->val=p%10;
                    count=p/10;
                    prev=temp;
                    temp=temp->next;
                }
                if(count>0)
                {
                    prev->next=new ListNode(count);
                }
            }
            return l1;
        }
        if(l1==NULL && l2==NULL)
        {
            if(count>0)return new ListNode(count);
            return NULL;
        }
        int p=l1->val+l2->val+count;
        l1->val=p%10;;
        l1->next=addTwoNumbers(l1->next,l2->next,p/10);
        return l1;
    }
};