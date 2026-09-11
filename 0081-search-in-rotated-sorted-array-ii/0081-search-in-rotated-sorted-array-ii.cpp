class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
     
            bool res=false;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                return true;
            }
            if(nums[m]==nums[l]&&nums[m]==nums[h]){
                h--;
                l++;
                continue;
            }
            if(nums[m]>=nums[l]){
                if(target>=nums[l]&&target<=nums[m]){
                    h=m-1;
                }else{
                    l=m+1;
                }
            }else{
                if(target>=nums[m]&&target<=nums[h]){
                    l=m+1;
                }else{
                    h=m-1;
                }
            }
        }
        return res;
    }
};