class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>res;
        int start=0;
        int end=0;
        while(start<nums.size()){
            string st="";
            while(end+1<nums.size()&&(long long)nums[end+1]-(long long)nums[start]==(end+1)-start){
                end++;
            }
            if(end==start){
                res.push_back(to_string(nums[start]));
            }else{
                st=to_string(nums[start])+"->"+to_string(nums[end]);
                res.push_back(st);
            }
            start=end+1;
            end=start;
        }
        return res;
    }
};