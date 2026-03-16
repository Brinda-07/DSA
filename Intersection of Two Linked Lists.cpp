/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int a = 0;
        int b = 0;
        ListNode* tempa = headA;
        ListNode* tempb = headB;
        while (tempa != nullptr) {
            a++;
            tempa = tempa->next;
        }
        while (tempb) {
            b++;
            tempb = tempb->next;
        }
        int diff = abs(a - b);
        if (a > b) {
            while (diff != 0) {
                headA = headA->next;
                diff--;
            }
        } else if (b > a) {
            while (diff != 0) {
                headB = headB->next;
                diff--;
            }
        }

        while(headA!=nullptr && headB!=nullptr)
        {
            if(headA==headB)
            return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};
