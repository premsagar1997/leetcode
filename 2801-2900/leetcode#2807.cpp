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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while (temp->next != NULL) {
            // find gcd
            int gcd = calGCD(temp->val, temp->next->val);
            //create new gcd node
            ListNode* newNode = new ListNode(gcd);
            // insert gcdNode between node1 & node2
            newNode->next = temp->next;
            temp->next = newNode;
            //move to the next pair of nodes
            temp = newNode->next;
        }

        return head;
    }

private:
    int calGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
