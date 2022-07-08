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
        string num1 = "";
        string num2 = "";
        ListNode* temp = l1;
        while(temp!=NULL){
            num1+=to_string(temp->val);
            temp = temp->next;
        }
        temp = l2;
        while(temp!=NULL){
            num2+=to_string(temp->val);
            temp = temp->next;
        }
        string ans = "";
        int n1 = num1.length(); int i = n1-1;
        int n2 = num2.length(); int j = n2-1;
        int carry = 0;
        while(i>=0 || j>=0 || carry){
            int sum =0;
            if(i>=0){
                sum+=num1[i--]-'0';
            }
            if(j>=0){
                sum+=num2[j--]-'0';
            }
            sum+=carry;
            ans+=to_string(sum%10);
            carry =  sum/10;
        }
        reverse(ans.begin(),ans.end());
        ListNode* newhead = new ListNode(0);
        temp = newhead;
        for(int i=0;i<ans.length();i++){
            ListNode* nw = new ListNode(ans[i]-'0');
            temp->next = nw;
            temp = nw;
        }
        return newhead->next;
    }
};