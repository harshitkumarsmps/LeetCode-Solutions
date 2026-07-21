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
    ListNode* reverseList(ListNode* head) {
        ListNode*t1=head;
        ListNode*t2=NULL;
        ListNode*t3=NULL;
        while(t1!=NULL){
            t3=t1->next;
            t1->next=t2;
            t2=t1;
            t1=t3;

        }
        return t2;
        
    }
};