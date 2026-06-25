class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
            int c=0;
        for(int i=0;i<nums.size();i++){
            int freq=0;
           
            for(int j=i;j<nums.size();j++){
                if(nums[j]==target){
                    freq++;
                }
                int len=j-i+1;
                if(freq>len/2){
                    c++;
                }
           
            }
        }
        return c;
    }
};