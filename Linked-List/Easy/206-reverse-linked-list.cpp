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
        ListNode *i=head;
        ListNode *nhead=NULL;
        while(i!=NULL){
            ListNode* t=i->next;
            i->next=nhead;
            nhead=i;
            i=t;
        }
        return nhead;
    }
};