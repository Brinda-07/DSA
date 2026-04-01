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
    ListNode* swapNodes(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;
        while (temp) {
            n++;
            temp = temp->next;
        }
        int c = k;
        ListNode* first = head;
        while (c != 1) {
            first = first->next;
            c--;
        }
        ListNode* second = head;
        int steps = n - k;
        while (steps--) {
            second = second->next;
        }

        int x = first->val;
        first->val = second->val;
        second->val = x;
        return head;
    }
};
