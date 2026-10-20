class Solution {
public:
    string reversePrefix(string s, int k) {
        // int a=s.size()-k;
        string tr="";
        string nr="";
        for(int i=0;i<k;i++){
            tr+=s[i];
        }
        for(int i=k;i<s.size();i++){
            nr+=s[i];
        }
        reverse(tr.begin(),tr.end());
        return tr+nr;
    }
};