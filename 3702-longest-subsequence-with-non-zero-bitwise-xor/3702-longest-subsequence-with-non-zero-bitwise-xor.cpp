class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            a=a^nums[i];
        }
        if(a!=0){
            return nums.size();
        }
        int count=0;
        if(a==0){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    count++;
                }
            }
            if(count!=nums.size())
            return nums.size()-1;
        }
        return 0;
    }
};