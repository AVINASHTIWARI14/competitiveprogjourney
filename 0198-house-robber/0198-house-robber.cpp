class Solution {
    int solve(vector<int>& nums,int i){
        if(i>nums.size()-1)
        return 0;

        if(dp[i]!=-1){
            return dp[i];
        }
        int rob=nums[i]+solve( nums,i+2);
        int skip=solve(nums,i+1);
        return dp[i]= max(rob,skip);
    }
public:
vector<int>dp;
    int rob(vector<int>& nums) {
        if(dp.empty()){
            dp.assign(101,-1);
        }
        return solve(nums,0);
    }
};