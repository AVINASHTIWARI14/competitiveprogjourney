class Solution {
    bool check(vector<int>& nums,int maxi, int k){
        int used=1;
        int added=0;
        int i=0;
        while(i<nums.size()){
            added+=nums[i];
            if(added<=maxi){
                i++;
            }else{
                added=nums[i];
                used++;
                i++;
            }
        }
        if(used>k){
            return false;
        }
        return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int h=accumulate(nums.begin(),nums.end(),0);
            int res=0;
        while(l<=h){
            int m=l+(h-l)/2;
            if(check(nums,m,k)){
                res=m;
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return res;
        
    }
};