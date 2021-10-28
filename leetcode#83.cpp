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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cp = head;
        ListNode* temp = NULL;
        stack<ListNode*> st;
        int cVal = INT_MAX;
        
        while (cp != NULL) {
            st.push(cp);
            cp = cp->next;
        }
        
        cp = NULL;
        while (!st.empty()) {
            temp = st.top();
            st.pop();
            if (cVal != temp->val) {
                cVal = temp->val;
                if (cp == NULL) {
                    cp = temp;
                } else {
                    temp->next = cp;
                    cp = temp;
                }
            }
        }
        
        return cp;
    }
};
