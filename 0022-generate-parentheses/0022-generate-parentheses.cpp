class Solution {
    bool valid(string s){
        stack<char>st;
        int i=1;
        if(s[0]==')'){
            return false;
        }
        st.push(s[0]);
        while(i<s.size()){
            if(s[i]=='('){

                st.push(s[i]);
                i++;
            }else if(s[i]==')'&&!st.empty()){
                st.pop();
                i++;
            }else if(s[i]==')'&&st.empty()){
                st.push(s[i]);
                i++;
            }
        }
        if(st.empty()){
        return true;}
        else
        return false;

    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string s="";
        for(int i=1;i<=n;i++){
            s+="()";
        }
        sort(s.begin(),s.end());
        vector<string>paren;
        do{
            paren.push_back(s);
        }while(next_permutation(s.begin(),s.end()));

        for(int i=0;i<paren.size();i++){
            if(valid(paren[i])){
                res.push_back(paren[i]);
            }
        }
    return res;
        
    }
};