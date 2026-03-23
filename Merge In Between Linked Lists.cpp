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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* anode = list1;
        ListNode* bnode = list1;
        while (a != 1) {
            anode = anode->next;
            a--;
        }
        while (b + 1 != 0) {
            bnode = bnode->next;
            b--;
        }
        anode->next = list2;
        while (list2->next) {
            list2 = list2->next;
        }
        list2->next = bnode;
        return list1;
    }
};
