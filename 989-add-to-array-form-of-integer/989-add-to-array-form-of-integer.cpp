class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int n = num.size(); int i = n-1;
        int carry = 0;
        while(i>=0 || k!=0 || carry){
            int sum =0;
            if(i>=0){
                sum+=num[i--];
            }
            if(k!=0){
                sum+=(k%10);
                k/=10;
            }
            sum+=carry;
            ans.push_back(sum%10);
            carry = sum/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};