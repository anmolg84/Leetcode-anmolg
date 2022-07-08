class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans =  "";
        int n1 = num1.length(); int i=n1-1;
        int n2 = num2.length(); int j=n2-1;
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
        return ans;
    }
};