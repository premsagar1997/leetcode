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
    bool isPalindrome(ListNode* head) {
        stack<int> stack;
        ListNode *current = head;
        while (current) {
            stack.push(current->val);
            current = current->next;
        }

        current = head;
        while (current && current->val == stack.top()) {
            stack.pop();
            current = current->next;
        }

        return current == NULL;
    }
};
