class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // string s="";
        // for(int i=0;i<nums.size();i++){
        //     s+=to_string(nums[i]);

        // }
        // for(int i=0;i<s.size();i++){
        //     cout<<s[i];
        // }
        vector<int>multi;
        for(int i=1;i<=100;i++){
            multi.push_back(k*i);
        }
        // cout<<endl;
        // for(int i=0;i<multi.size();i++){
        //     cout<<multi[i]<<" ";
        // }
        for(int i=0;i<multi.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(multi[i]!=nums[j]){
                    count++;
                }
            }

                if(count==nums.size())
                return multi[i];
        }
        
        return 69;
    }
};