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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         int c=0;
         ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
         if(n == c) {
            return head->next;
        }
         int i=0;
        temp=head;
        ListNode*prev=NULL;
        int ct=c-n+1;
        while(i<ct-1&&temp!=NULL){
            prev=temp;

            temp=temp->next;
            i++;

        }
        prev->next=temp->next;
        return head;
        
    }
};