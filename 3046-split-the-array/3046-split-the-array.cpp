class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int check=0;
        for(int i=0;i<nums.size();i++){
            check=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])
                check++;
            }
            if(check>1&&check%2!=0){
                return false;
            }
        }
        return true;
    }
};