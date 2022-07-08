class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(256,-1);
        int ans = INT_MIN;
        int n = s.length();
        if(n==0) return 0;
        int last = 0 ; int it = 0;
        while(it<n){
            if(mp[s[it]]!=-1){
                last = max(last,mp[s[it]]+1);
            }
            mp[s[it]]=it;
            ans = max(ans,(it-last+1));
            it++;
        }
        return ans;
    }
};