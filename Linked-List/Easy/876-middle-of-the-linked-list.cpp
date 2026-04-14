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
    ListNode* middleNode(ListNode* head) {
        int c = 0;
        ListNode* i = head;
        while(i!=NULL){
            i = i->next;
            c++;
        }
        c /= 2;
        ListNode* k = head;
        for(int j = 0; j < c ; j++){
            k = k->next;
        }
        return k;
    }
};