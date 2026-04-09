class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = 0;
        ListNode* temp = head;

        while(temp) {
            len++;
            temp = temp->next;
        }

        int n = len / k;
        int extra = len % k;

        vector<ListNode*> ans(k, nullptr);
        ListNode* curr = head;

        for(int i = 0; i < k; i++) {
            if(curr == NULL) {
                ans[i] = NULL;
                continue;
            }

            ans[i] = curr;

            int size = n + (extra > 0 ? 1 : 0);
            if(extra > 0) extra--;

            for(int j = 1; j < size; j++) {
                curr = curr->next;
            }

            ListNode* nextptr = curr->next;
            curr->next = NULL;
            curr = nextptr;
        }

        return ans;
    }
};
