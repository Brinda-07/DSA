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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        return head;
        ListNode * prev=head;
        ListNode *temp=head->next;

        while(temp!=nullptr)
        {
            int x=__gcd(prev->val,temp->val);
            ListNode * newNode=new ListNode(x);
            prev->next=newNode;
            newNode->next=temp;
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};
