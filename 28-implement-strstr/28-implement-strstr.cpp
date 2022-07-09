class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        if(m==0) return 0;
        if(m>n) return -1;
        for(int i=0;i<n;i++){
            int j = 0;
            if(haystack[i]==needle[j]){
                int start = i;
                int count = 0;
                while(j<m && haystack[start++]==needle[j]) {j++; count++;}
                if(count==m) return i;
            }
        }
        return -1;
    }
};