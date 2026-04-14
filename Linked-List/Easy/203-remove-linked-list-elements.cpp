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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* i = head;
        while (head != NULL && head->val == val) {
            head = head->next;
        }
        if (head == NULL) {
            return NULL;
        }
        while (i->next != NULL) {
            if (i->next->val == val) {
                i->next = i->next->next;
            } else {
                i = i->next;
            }
        }
        return head;
    }
};