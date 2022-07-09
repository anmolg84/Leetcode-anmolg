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
    ListNode* deleteMiddle(ListNode* head) {
        int n=0;
        ListNode* temp = head;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        if(n==1) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(n%2==0){
            slow->next = slow->next->next;
        }
        else{
            slow->val = slow->next->val;
            slow->next = slow->next->next;
        }
        delete temp;
        return head;
    }
};