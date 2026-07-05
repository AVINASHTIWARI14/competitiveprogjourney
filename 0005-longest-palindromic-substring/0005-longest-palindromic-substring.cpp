class Solution {
    bool palicheck(const string &s,int l , int r){
       
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }else{
                return false;
            }
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
     string res="";
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(palicheck(s,i,j)){
                    if(j-i+1>res.size()){
                    res=s.substr(i,j-i+1);
                }
            }
        }}
        return res;
    }
};