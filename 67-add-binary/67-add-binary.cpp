class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int n1 = a.length(); int i = n1-1;
        int n2 = b.length(); int j = n2-1;
        int carry = 0;
        while(i>=0 || j>=0 || carry!=0){
            int sum = 0;
            if(i>=0){
                sum+=a[i]-'0'; i--;
            }
            if(j>=0){
                sum+=b[j]-'0'; j--;
            }
            sum+=carry;
            carry = sum/2;
            if(sum==0 || sum==1) ans+=to_string(sum);
            else if(sum==2){
                ans+='0'; 
            }
            else{
                ans+='1';
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};