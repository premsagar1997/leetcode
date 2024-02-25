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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        ListNode *current = head;
        int i = 0;
        while (i < n) {
            temp = temp->next;
            i++;
        }

        if (temp == NULL) 
            return head->next;

        while (temp->next != NULL) {
            temp = temp->next;
            current = current->next;
        }

        ListNode *d = current->next;
        current->next = current->next->next;
        delete(d);

        return head;
    }
};
