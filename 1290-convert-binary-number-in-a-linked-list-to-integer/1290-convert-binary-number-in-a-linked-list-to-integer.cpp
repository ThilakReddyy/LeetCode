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
    int getDecimalValue(ListNode* head) {
        string binary="";
        int number=0;
        while(head)
        {
            binary=binary+to_string(head->val);
            
            head=head->next;
        }
        int n=binary.length();
      for(int i=0;i<n;i++)
      {
          if(binary[i]=='1')
          {
              number=number+pow(2,n-i-1);
          }
      }
        return number;
    }
};