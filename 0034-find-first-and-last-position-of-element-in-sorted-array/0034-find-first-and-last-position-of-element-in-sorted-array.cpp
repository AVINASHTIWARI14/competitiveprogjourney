class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        int low=0;
        int high=nums.size()-1;
        int start=-1;
        int min_pos=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target){
                start=mid;
                min_pos=min(min_pos,start);
                high=mid-1;
            }else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        if(min_pos==INT_MAX){
            min_pos=-1;
        }
        res.push_back(min_pos);
        int lo=0;
        int hi=nums.size()-1;
        int st=-1;
        int max_pos=INT_MIN;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;

            if(nums[mid]==target){
                st=mid;
                max_pos=max(min_pos,st);
                lo=mid+1;
            }else if(nums[mid]>target){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        if(max_pos==INT_MIN){
            max_pos=-1;
        }
        res.push_back(max_pos);
        return res;
        
    }
};