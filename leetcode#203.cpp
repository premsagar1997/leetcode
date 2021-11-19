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
    ListNode* removeElements(ListNode* head, int val) {
        stack<ListNode*> st;
        ListNode* ptr = head;
        
        while (ptr != NULL) {
            if (ptr->val != val)
                st.push(ptr);
            ptr = ptr->next;
        }
        
        ptr = NULL;
        while (!st.empty()) {
            ListNode* temp = st.top();
            st.pop();
            temp->next = ptr;
            ptr = temp;
        }
        
        return ptr;
    }
};
