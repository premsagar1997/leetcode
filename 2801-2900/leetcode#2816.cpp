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
    ListNode* doubleIt(ListNode* head) {
        // if the head's value is greater that 4
        // insert a new node with value 0 at the beg
        // move head pointer to the new node
        if (head->val > 4) {
            ListNode *newNode = new ListNode(0, nullptr);
            newNode->next = head;
            head = newNode;
        }

        ListNode *temp = head;
        while (temp != nullptr) {
            // double the value & handle carry
            temp->val = (temp->val * 2) % 10;

            // if the next node value is greater than 4 (if exists)
            // increment current node's value by 1              
            if (temp->next != nullptr && temp->next->val > 4) {
                temp->val++;
            }

            // move temp ptr to the next node
            temp = temp->next;
        }

        return head;
    }
};
