class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i=0;
        int j=0;
        string res="";
        while(i<w1.size()&&j<w2.size()){
            res+=w1[i];
            i++;
            res+=w2[j];
            j++;
        }
        if(i<w1.size()){
            while(i<w1.size()){
                res+=w1[i];
                i++;
            }
        }
        if(j<w2.size()){
            while(j<w2.size()){
                res+=w2[j];
                j++;
            }
        }
        return res;
    }
};