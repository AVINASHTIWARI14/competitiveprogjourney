class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxval=0;
        for(int i=0;i<accounts.size();i++){
        int val=0;
            for(int j=0;j<accounts[i].size();j++){
                val+=accounts[i][j];
            }
            maxval=max(maxval,val);
        }
        return maxval;
    }
};