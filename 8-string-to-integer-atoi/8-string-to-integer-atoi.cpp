class Solution {
public:
    int myAtoi(string s) {
        if(s=="2147483648") return 2147483647;
        if(s=="-2147483649") return -2147483648;
        long long ans = 0;
        int n = s.length();
        int i= 0; bool neg = false,pos=false;
        while(i<n && s[i]==' ') i++;
        if(s[i]=='-') {neg = true;i++;}
        if(s[i]=='+') {pos = true;i++;}
        if(neg && pos) return 0;
        while(s[i]>='0' && s[i]<='9' ){
             if(((ans*10>INT_MAX || ans>INT_MAX) && neg==false)) return 2147483647;
            else if(neg==true && (-1*ans*10<INT_MIN || -1*ans<INT_MIN)) return -1*(2147483648);
            ans = ans*10 + s[i]-'0';
        
            i++;
        }
        if(neg==true) ans*=-1;
        return ans;
    }
};