class Solution {
    int value(vector<int>& weights,string dummy,string s){
        int sum=0;
        for(int i=0;i<dummy.size();i++){
            for(int j=0;j<s.size();j++){
                if(dummy[i]==s[j]){
                    sum+=weights[j];
                }
            }
        }
        return sum%26;

    }
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<int>tores;
        string s="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<words.size();i++){
            string dummy=words[i];
            int a=value(weights,dummy,s);
            tores.push_back(a);
        }
        reverse(s.begin(),s.end());
        string res="";
        for(int i=0;i<tores.size();i++){
            res+=s[tores[i]];
        }
        return res;
    }
};