class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>res;
        vector<int>num;
        int a=*max_element(nums.begin(),nums.end());
        int b=*min_element(nums.begin(),nums.end());
        for(int i=b;i<=a;i++){
            num.push_back(i);
        }
     for(int i=0;i<num.size();i++){
      int  it=0;
        for(int j=0;j<nums.size();j++){
            if(num[i]!=nums[j]){
                it++;
            }
        }
        if(it==nums.size())
        res.push_back(num[i]);
     }
     sort(res.begin(),res.end());
     return res;
    }
};