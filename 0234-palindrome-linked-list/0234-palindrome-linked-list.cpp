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
            slow=slow->next;
            fast=fast->next->next;
            
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
          t1=t3;

          while(t1!=NULL){
            if(t1->val!=head->val)return false;
            head=head->next;
            t1=t1->next;
          }

        

        return true;
    }
};