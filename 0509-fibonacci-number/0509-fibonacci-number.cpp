class Solution {
public:
    int fib(int n) {
        vector<int>dp(n+1);
        if(n<=1)
        return n;
        dp[0]=1;
        dp[1]=1;
for(int i=2;i<dp.size();i++){
    dp[i]=dp[i-1]+dp[i-2];
}
       return dp[n-1]; 
    }
};