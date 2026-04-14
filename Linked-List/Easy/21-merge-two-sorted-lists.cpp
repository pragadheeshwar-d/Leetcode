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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* list3 = new ListNode(0);
        ListNode* i = list3;
        while(t1 != NULL && t2 != NULL){
            if(t1->val > t2->val){
                i->next = t2;
                t2 = t2->next;
                i = i->next;
            }
            else{
                i->next = t1;
                t1 = t1->next;
                i = i->next;
            }
        }
        if(t1!=NULL){
            i->next = t1;
        }
        if(t2!=NULL){
            i->next = t2;
        }
        ListNode* a = list3->next;
        return a;
    }
};