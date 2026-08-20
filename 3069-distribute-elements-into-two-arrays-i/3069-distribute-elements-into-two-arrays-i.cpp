class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>one;
        vector<int>two;
        one.push_back(nums[0]);
        two.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(one[one.size()-1]>two[two.size()-1]){
                one.push_back(nums[i]);
            }else{
                two.push_back(nums[i]);
            }
        }
        nums.clear();
        nums=one;
        nums.insert(nums.end(),two.begin(),two.end());
        return nums;
 
    }
};