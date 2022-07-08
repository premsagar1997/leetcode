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
    //1st Method
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
    
    //2nd Method
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current = head;
        ListNode* prev = NULL;
        
        while (current != NULL) {
            if (current->val == val && current == head) {
                current = current->next;
                head = current;
                prev = current;
            } else if (current->val == val) {
                current = current->next;
                prev->next = current;
            } else {
                prev = current;
                current = current->next;
            }
        }
        
        return head;
    }
};
