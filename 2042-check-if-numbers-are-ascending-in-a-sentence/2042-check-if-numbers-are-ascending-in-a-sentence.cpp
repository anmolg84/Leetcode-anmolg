class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> ans;
        int n = s.length();
        int num = 0; bool value = false;
        for(int i=0;i<n;i++){
            if(s[i]-'0'>=0 && s[i]-'0'<=9){
                num = num*10 + s[i]-'0';
                value = true;
            }
            else if(s[i]==' ' && value){
                ans.push_back(num);
                value = false;
                num = 0;
            }
        }
        if(num!=0 && value) ans.push_back(num);
        // for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
        int m = ans.size();
        for(int i=0;i<m-1;i++){
            if(ans[i]>=ans[i+1]) return false;
        }
        return true;
    }
};