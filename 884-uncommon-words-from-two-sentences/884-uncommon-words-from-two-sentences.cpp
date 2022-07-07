class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        map<string,int> mp;
        string str = "";
        for(int i=0;i<s1.length();i++){
            if(s1[i]==' '){
                mp[str]++;
                str ="";
            }
            else str+=s1[i];
        }
        mp[str]++; str = "";
        for(int j=0;j<s2.length();j++){
            if(s2[j]==' '){
                mp[str]++;
                str ="";
            }
            else str+=s2[j];
        }
        mp[str]++;
        for(auto i:mp){
            if(i.second==1) ans.push_back(i.first);
        }
        str = "";
        return ans;
    }
};