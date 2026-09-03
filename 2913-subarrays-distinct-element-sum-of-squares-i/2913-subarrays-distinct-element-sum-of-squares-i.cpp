class Solution {
    int calc(vector<int>demo){
       int a=*max_element(demo.begin(),demo.end());
       vector<int>num(a+1,0);
       for(int i=0;i<demo.size();i++){
        num[demo[i]]++;
       }
       int count=0;
       for(int i=0;i<num.size();i++){
        if(num[i]>=1){
            count++;
        }
       }
       return count*count;
    }
public:
    int sumCounts(vector<int>& nums) {
        vector<vector<int>>sub;
        for(int i=0;i<nums.size();i++){
        vector<int>subarr;
            for(int j=i;j<nums.size();j++){
                subarr.push_back(nums[j]);
                sub.push_back(subarr);
            }
        }
        int res=0;
        for(int i=0;i<sub.size();i++){
            
                res+=calc(sub[i]);
            
        }
        return res;
    }
};