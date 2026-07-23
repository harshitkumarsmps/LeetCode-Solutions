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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int a =1;
          ListNode*temp=head;
            ListNode*t1=NULL;
              ListNode*t2=NULL;
               ListNode*prev=NULL;
                ListNode*pre=NULL;
            
                while(a<=right){
           
        

            if(a==left){
                pre=prev;
                
                t1=temp;
            }
            if(a==right)t2=temp;

            prev=temp;

             temp=temp->next;
              a++;
          }
           ListNode*p=t1;
             ListNode*q=NULL;
             t2=t2->next;
             ListNode*r=temp;
             while(p!=temp){
                q=p->next;
                p->next=r;
                r=p;
                p=q;

             }
             
           
              if(pre != NULL)
            pre->next = r;
        else
            head = r;           

        return head;

         
        
        
    }
};