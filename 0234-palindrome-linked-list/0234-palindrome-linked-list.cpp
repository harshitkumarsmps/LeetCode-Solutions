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
    bool isPalindrome(ListNode* head) {

         ListNode*slow=head;
          ListNode*fast=head;
          while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;

          }
          if(fast!=NULL){
            slow=slow->next;

          }
          ListNode*t1=slow;
           ListNode*t2=NULL;
            ListNode*t3=NULL;
            while(t1!=NULL){
                t2=t1->next;
                t1->next=t3;
                t3=t1;
                t1=t2;

            }
            while(t3!=NULL){
                if(head->val!=t3->val)return false;
                t3=t3->next;
                head=head->next;

            }
    return true;

        
    }
};