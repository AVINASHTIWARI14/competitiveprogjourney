class Solution {
    int calc(int i,vector<int>& nums,int k){
        int a =*max_element(nums.begin(),nums.begin()+i+1);
        int b=*min_element(nums.begin()+i,nums.end());
        if(a-b<=k){
            return i;
        }
        return -1;
    }
public:
    int firstStableIndex(vector<int>& nums, int k) {
       if(nums.size()==1){
        return 0;
       }
        int count=0;
        int res=INT_MAX;
        for(int i=0;i<nums.size();i++){
            count=calc(i,nums,k);
            if(count!=-1){
            res=min(res,count);}
        }
        if(res==INT_MAX){
            return -1;
        }
        return res;
    }
};