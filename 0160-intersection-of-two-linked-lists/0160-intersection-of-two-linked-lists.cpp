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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while (temp1 != temp2) {
            temp1 = temp1
                        ? temp1->next
                        : headB; // note here we actually need to go to null (
                                 // the end ) as well because there may be a
                                 // case when there is no intersecting node then
                                 // the while loop will go in infinite loop
            temp2 = temp2 ? temp2->next : headA;
        }
        return temp1;
    }
};