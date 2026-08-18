class Solution {
    int check(vector<int>& nums,int i){
        if(dp.empty())
        dp.assign(101,-1);
        if(i>nums.size()-1){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int rob=nums[i]+check(nums,i+2);
        int skip=check(nums,i+1);

        return dp[i]=max(rob,skip);
    }
public:
vector<int>dp;
    int rob(vector<int>& nums) {
        return check(nums,0);
        
    }
};