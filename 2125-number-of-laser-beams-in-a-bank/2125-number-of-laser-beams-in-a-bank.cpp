class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int m = bank.size();
        int n = bank[0].size();
        vector<int> vc(m,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(bank[i][j]=='1'){
                    vc[i]++;
                }
            }
        }
        int i = 0,last = 0;
        while(i<m){
            if(vc[i]==0) i++;
            else{
                ans+=(vc[i]*last);
                last = vc[i];
                i++;
            }
        }
        return ans;
    }
};