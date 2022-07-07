class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        vector<string> ans;
        map<string,int> mp;
        string str = "";
        for(int i=0;i<n;i++){
            if(s1[i]==' '){
                mp[str]++;
                str ="";
            }
            else str+=s1[i];
        }
        mp[str]++; str = "";
        for(int j=0;j<m;j++){
            if(s2[j]==' '){
                mp[str]++;
                str ="";
            }
            else str+=s2[j];
        }
        mp[str]++; str = "";
        for(auto i:mp){
            if(i.second==1) ans.push_back(i.first);
        }
        return ans;
    }
};