class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        s+="&";
        int i=0;
        int j=0;
        while(i<s.size()&&j<t.size()){
            if(s[i]!=t[j]){
                return t[j];
            }
            i++;
            j++;
        }
        return 'a';
    }
};