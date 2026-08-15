class Solution {
public:
vector<int>dp;
    int climbStairs(int n) {
        if(dp.empty())
        dp.assign(n+1,-1);
        if(n<=1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
        
    }
};