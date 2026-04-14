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
        int c = 0;
        ListNode* i=head;
        while(i!=NULL){
            i=i->next;
            c++;
        }
        int s = 0;
        while(head!=NULL){
            --c;
            if(head->val==1){
                s+=pow(2,c);
            }
            head=head->next;
    
        }
        return s;
    }
};