class Solution {
    vector<int>res;
public:
    int climbStairs(int n) {
        if(res.empty()){
            res.assign(n+1,-1);
        }
    
        res[0]=1;
        res[1]=1;
        for(int i=2;i<res.size();i++){
            res[i]=res[i-1]+res[i-2];
        }
       return res[n];
       
    }
};