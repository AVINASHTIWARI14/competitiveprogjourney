class Solution {
public:
    int scoreOfString(string s) {
        vector<int>asc;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            asc.push_back(int(c));
        }
        int sum=0;
        for(int i=1;i<asc.size();i++){
            sum+=abs(asc[i]-asc[i-1]);
        }
        return sum;
    }
};