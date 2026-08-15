class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        string dummy="";

        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                dummy+=s[i];
            }
        }
        return stoll(dummy);
        
    }
};