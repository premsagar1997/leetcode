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
        if (head == NULL)
            return head;
        
        ListNode* prev = head;
        ListNode* current = head;
        while (current != NULL) {
            if (current->val != prev->val) {
                prev->next = current;
                prev = current;
            }
            current = current->next;
        }
        
        prev->next = NULL;
        return head;
    }
};
