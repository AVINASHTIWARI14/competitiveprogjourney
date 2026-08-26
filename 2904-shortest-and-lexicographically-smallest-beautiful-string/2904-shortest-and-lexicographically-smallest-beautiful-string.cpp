class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       vector<vector<int>>res;
       vector<int>tovec;
       for(int i=0;i<s.size();i++){
        char c=s[i];
        tovec.push_back(c-'0');
       }
       vector<int>temp;
       for(int i=0;i<tovec.size();i++){
        temp.clear();
        for(int j=i;j<tovec.size();j++){
            temp.push_back(tovec[j]);
        res.push_back(temp);
        }
       }
       vector<string>st;
       for(int i=0;i<res.size();i++){
        int count=0;
        string t="";
        for(int j=0;j<res[i].size();j++){
            t+=to_string(res[i][j]);
            if(res[i][j]==1){
                count++;
            }
        }
        if(count==k){
            st.push_back(t);
        }
       }
       sort(st.begin(),st.end());
    if(st.empty()){
        return "";
    }
     string ans=st[0];
     for(int i=1;i<st.size();i++){
        if(st[i].size()<ans.size())
        ans=st[i];
     }
     return ans;
    }
};