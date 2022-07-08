class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int ans = INT_MAX;
        int n = cards.size();
        map<int,int> mp;
        int l=0,r=0;
        while(r<n){
            if(mp.find(cards[r])!=mp.end()){
                l = max(l,mp[cards[r]]);
                ans = min(ans,(r-l+1));
            }
            mp[cards[r]]=r;
            r++;
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};