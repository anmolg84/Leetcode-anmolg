class Solution {
public:
    int getMinSwaps(string num, int k) {
        int ans = 0;
        int n = num.length();
        string str = num;
        while(k--){
            next_permutation(num.begin(),num.end());   
        }
        for(int i=0;i<n;i++){
            int j = i;
            if(str[i]!=num[i]){
                while(num[j]!=str[i]) i++;
                while(i>j){
                    swap(str[i],str[i-1]);
                    i--;
                    ans++;
                }
            }
        }
        return ans;
    }
};