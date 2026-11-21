class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string>res;
        int ac=0;
        int bc=0;
        for(int i=0;i<rain.size()-1;i++){
            if(rain[i]==0){
                res.push_back("None");
            }else if(rain[i]==1){
                if(rain[i+1]==1){
                    if(ac<=bc){
                    res.push_back("Alice");
                    ac++;}else{

                    res.push_back("Bob");
                    bc++;
                    
                    }

                }else{
                    res.push_back("Bob");
                    bc++;
                }
            }
        }
        if(rain[rain.size()-1]==1){
            res.push_back("Bob");
        }else{
            res.push_back("None");
        }
        return res;
    }
};