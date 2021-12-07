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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(-1);
        ListNode* temp = head;
        
        int v1 = 0, v2 = 0, sum = 0, carry = 0;
        while (l1 != NULL || l2 != NULL) {
            v1 = v2 = 0;
            if (l1 != NULL) {
                v1 = l1->val;
                l1 = l1->next;
            }
            
            if (l2 != NULL) {
                v2 = l2->val;
                l2 = l2->next;
            }
            
            sum = v1 + v2 + carry;
            carry = sum / 10;
            sum = sum % 10;
            ListNode *n = new ListNode(sum);
            temp->next = n;
            temp = n;
        }
        
        if (carry != 0) {
            ListNode *n = new ListNode(carry);
            temp->next = n;
            temp = n;
        }
        
        return head->next;
    }
};
