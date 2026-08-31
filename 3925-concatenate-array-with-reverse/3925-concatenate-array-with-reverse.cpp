class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>rev=nums;
        reverse(rev.begin(),rev.end());
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            res.push_back(nums[i]);
        }
        for(int i =0;i<rev.size();i++){
            res.push_back(rev[i]);
        }
        
        return res;
    }
};