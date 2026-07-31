class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        string check="";
        for(int i=0;i<nums.size();i++){
            check+=to_string(nums[i]);
        }
        if(check.find('0')==string::npos){
            return check.size()-1;
        }
        int count0=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int count1=0;
            
        for(int j=i;j<nums.size();j++){
            if(nums[j]==0){
                count0++;
                if(count0>1){
                    while(nums[i]!=0){
                        if(nums[i]==1){
                            count1--;
                        }
                        i++;
                        
                    }
                    i++;
                }
            }else if(nums[j]==1){
                count1++;
            }
            maxi=max(maxi,count1);
        }
        }
        return maxi;
    }
};