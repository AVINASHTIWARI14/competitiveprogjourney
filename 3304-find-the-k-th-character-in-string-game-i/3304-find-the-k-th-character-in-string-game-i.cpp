class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        for(int i=0;i<9;i++){
            string dummy=s;
            for(int j=0;j<dummy.size();j++){
                dummy[j]=dummy[j]+1;
            }
            s+=dummy;
            if(s.size()>=k+1)
                break;
            
        }
     return s[k-1];
    }
};