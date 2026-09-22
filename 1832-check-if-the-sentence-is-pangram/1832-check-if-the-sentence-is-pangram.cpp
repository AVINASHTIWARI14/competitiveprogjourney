class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26){
            return false;
        }
        vector<int>alphacount(150,0);
        for(int i=0;i<sentence.size();i++){
            alphacount[sentence[i]+0]++;
        }
        for(int i=97;i<=122;i++){
            if(alphacount[i]==0){
                return false;
            }
        }
        return true;
    }
};