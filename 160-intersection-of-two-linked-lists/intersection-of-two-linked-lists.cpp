/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    int getlen(ListNode* head) {
        int count = 0;
        while (head != NULL) {
            head = head->next;
            count++;
        }
        return count;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lena = getlen(headA);
        int lenb = getlen(headB);

        ListNode* a = headA;
        ListNode* b = headB;

        int diff = abs(lena - lenb);

        if (lena > lenb) {
            while (diff--) a = a->next;
        } else {
            while (diff--) b = b->next;
        }

        while (a != NULL && b != NULL) {
            if (a == b) return a;
            a = a->next;
            b = b->next;
        }

        return NULL;
    }
};
