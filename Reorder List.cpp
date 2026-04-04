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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL)
    return;

        ListNode * temp=head;
        ListNode * slow=head;
        ListNode * fast=head;
        //find middle
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode * secondhead=slow->next;
        slow->next=nullptr;
        //reverse the second part
        ListNode * prev=nullptr;
        while(secondhead)
        {
            ListNode * secnext=secondhead->next;
            secondhead->next=prev;
            prev=secondhead;
            secondhead=secnext;
        }
          //merge both ll
        while(temp && prev)
        {
            ListNode * firstnext=temp->next;
            ListNode* secondnext=prev->next;
            temp->next=prev;
            prev->next=firstnext;
            temp=firstnext;
            prev=secondnext;
        }
        


        
    }
};
