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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> copy;
        while (head) {
            copy.push_back(head->val);
            head = head->next;
        }

        stack<int> st;
        vector<int> ans(copy.size(), 0);

        for (int i = 0; i < copy.size(); i++) {
            while (!st.empty() && copy[st.top()] < copy[i]) {
                ans[st.top()] = copy[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
