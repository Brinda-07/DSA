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
    ListNode* reverselist(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* r1 = reverselist(l1);
        ListNode* r2 = reverselist(l2);

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        ListNode* temp1 = r1;
        ListNode* temp2 = r2;
        int carry = 0;

        while (temp1 || temp2) {
            int sum = carry;
            if (temp1)
                sum = sum + temp1->val;
            if (temp2)
                sum = sum + temp2->val;
            ListNode* newnode = new ListNode(sum % 10);
            carry = sum / 10;

            curr->next = newnode;
            curr = curr->next;
            if (temp1)
                temp1 = temp1->next;
            if (temp2)
                temp2 = temp2->next;
        }
        if (carry) {
            ListNode* newnode = new ListNode(carry);
            curr->next = newnode;
        }
        return reverselist(dummy->next);
    }
};
