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
         ListNode*n1=head;
          ListNode*n2=head;
          while(n2!=NULL&&n2->next!=NULL){
            n2=n2->next->next;
            n1=n1->next;
          }
          if(n2!=NULL){
            n1=n1->next;
          }
           ListNode*t1=n1;
            ListNode*t2=NULL;
             ListNode*hd=NULL;
             while(t1!=NULL){
                t2=t1->next;
                t1->next=hd;
                hd=t1;
                t1=t2;

             }
             t1=head;
             while(hd!=NULL){
                if(hd->val!=t1->val)return false;
                hd=hd->next;
                t1=t1->next;
             }
             return true;


        
    }
};