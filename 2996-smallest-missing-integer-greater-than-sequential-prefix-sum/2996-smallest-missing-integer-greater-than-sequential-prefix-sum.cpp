class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0]+1;
        if(nums[0]+1!=nums[1]){
          for(int i=nums[0]+1;i<15000;i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(i!=nums[j])
                count++;
            }
            if(count==nums.size())
            return i;
          }


        }

        
        // vector<int>dummy;
        int sum=nums[0];
        // dummy.push_back(nums[0]);
    
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1)
                // dummy.push_back(nums[i]);
                sum+=nums[i];
                else
                break;
            
        }
        // int sum=0;
        // for(int i=0;i<dummy.size();i++){
        //     sum+=dummy[i];
        // }
        for(int i=sum;i<15000;i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(i!=nums[j])
                count++;
            }
            if(count==nums.size())
            return i;
        }
        return 69;
    }
};