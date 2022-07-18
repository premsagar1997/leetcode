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

//---------------------METHOD - 1-----------------------------

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* mergedList = new ListNode();
        ListNode* temp = mergedList;
        
        while (list1 != NULL && list2 != NULL) {
            if (list1->val < list2->val) {
                mergedList->next = list1;
                list1 = list1->next;
            } else {
                mergedList->next = list2;
                list2 = list2->next;
            }
            mergedList = mergedList->next;
        }
        
        if (list1 != NULL)
            mergedList->next = list1;
        
        if (list2 != NULL)
            mergedList->next = list2;
        
        mergedList = temp->next;
        delete temp;
        
        return mergedList;
    }
};


//---------------------METHOD - 2-----------------------------

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* mergedList = new ListNode();
        ListNode* temp = mergedList;
        
        while (list1 != NULL && list2 != NULL) {
            ListNode* n;
            if (list1->val < list2->val) {
                n = new ListNode(list1->val, NULL);
                list1 = list1->next;
            } else {
                n = new ListNode(list2->val, NULL);
                list2 = list2->next;
            }
            mergedList->next = n;
            mergedList = mergedList->next;
        }
        
        while (list1 != NULL) {
            ListNode* n = new ListNode(list1->val, NULL);
            mergedList->next = n;
            mergedList = mergedList->next;
            list1 = list1->next;
        }
        
        while (list2 != NULL) {
            ListNode* n = new ListNode(list2->val, NULL);
            mergedList->next = n;
            mergedList = mergedList->next;
            list2 = list2->next;
        }
        
        mergedList = temp->next;
        delete temp;
        
        return mergedList;
    }
};
