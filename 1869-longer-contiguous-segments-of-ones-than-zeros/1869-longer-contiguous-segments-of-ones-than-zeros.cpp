class Solution {
    int check(int target,string s){
        int v=0;
        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]-'0'==target){
                v+=1;
                res=max(res,v);
            }else{
                v=0;
            }
        }
        return res;
    }
public:
    bool checkZeroOnes(string s) {
        int one=check(1,s);
        int zero=check(0,s);
        cout<<one<<" "<<zero;
        if(one>zero){
            return true;
        }
        return false;
    }
};