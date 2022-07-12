class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length()>k){
            string ans = "";
            int i = 0;
            while(i<s.length()){
                int sum = 0;
                for(int j= i;j<i+k;j++){
                    if(j<s.length()){
                        sum+=s[j]-'0';
                    }
                }
                ans+=to_string(sum);
                i+=k;
            }
            s = ans;
        }
        return s;
    }
};