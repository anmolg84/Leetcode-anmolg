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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* start = new ListNode(0);
        start->next = head;
        ListNode * temp;
        ListNode* slow = start; ListNode* fast = start; 
        int value = k;
        while(value--){
            fast =fast ->next;
        }
        temp= fast;
        while(fast->next!=NULL){
            slow = slow->next;
            fast=fast->next;
        }
        int data = slow->next->val;
        slow->next->val = temp->val;
        temp->val = data;
        return head;
    }
};