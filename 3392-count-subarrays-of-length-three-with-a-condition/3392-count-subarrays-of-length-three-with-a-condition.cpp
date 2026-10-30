class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i=0;
        int j=1;
        int k=2;
        if(nums.size()==3){
            if((nums[i]+nums[k])*2==nums[j]){
                return 1;

            }
            return 0;
        }
        int count=0;
        while(k<nums.size()){
            if((nums[i]+nums[k])*2==nums[j]){
                count++;
                i=j;
                j=k;

                k++;
            }else{
                i=j;
                j=k;
              k++;}

        }
        return count;
    }
};