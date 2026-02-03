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
    ListNode* solve(ListNode* list1, ListNode* list2) {
        if(list1->next==NULL){
            list1->next=list2;
            return list1;
        }

        ListNode* first = list1;
        ListNode* next1 = list1->next;
        ListNode* second = list2;
        ListNode* snext = list2->next;

        while (next1 != NULL && second != NULL) {
            if ((second->val >= first->val) && (second->val <= next1->val)){
                snext=second->next;

                first->next = second;
                second->next = next1;

                first = second;
                second = snext;
            } else {
                // first ko increment kar do
                first = next1;
                next1 = next1->next;
                if (next1 == NULL) {
                    first->next = second;
                    return list1;
                }
            }
        }
        return list1;
    }

public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }
        if (list1->val <= list2->val) {
            return solve(list1, list2);
        } else {
            return solve(list2, list1);
        }

        return list1;
    }
};