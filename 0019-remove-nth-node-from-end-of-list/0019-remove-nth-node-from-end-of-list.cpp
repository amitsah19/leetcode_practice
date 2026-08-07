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
        if(head ==nullptr || head -> next ==nullptr )return nullptr ;
        int size = 0 ;
        ListNode * temp = head; 
        while( temp ){
            temp= temp->next ;
            size ++ ;
        }
        if(size == n)return head ->next ;
        temp = head;
        int count = size - n  ;

        for ( int i =0;i<count -1  ;i++)
        temp = temp -> next ;
        temp -> next = temp ->next -> next ;
        return head ;
    }

};