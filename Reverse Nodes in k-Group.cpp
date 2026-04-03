ListNode* reverse(ListNode* head,int k){
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* Next=NULL;
    while(curr && k--){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int count=0;
        while(temp && count<k){
            count++;
            temp=temp->next;
        }
        if(count<k) return head;
        ListNode* newHead=reverse(head,k);
        head->next=reverseKGroup(temp,k);
        return newHead;
    }
};
