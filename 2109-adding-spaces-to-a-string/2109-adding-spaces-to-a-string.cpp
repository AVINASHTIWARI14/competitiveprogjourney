class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res="";
        int j=0;
        string demo=s;
        reverse(demo.begin(),demo.end());
        for(int i=0;i<spaces.size();i++){
            while(j!=spaces[i]){
                res.push_back(s[j]);
                demo.pop_back();
                j++;
            }
            res+=" ";
        }
        reverse(demo.begin(),demo.end());
        return res+demo;
    }
};