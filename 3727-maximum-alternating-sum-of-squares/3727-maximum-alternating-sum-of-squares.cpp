class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long res=0;
        vector<long long>nums2;
        for(int i=0;i<nums.size();i++){
            nums2.push_back(1ll*nums[i]*nums[i]);
        }
        for(int i=0;i<nums2.size();i++){
            cout<<nums2[i]<<" ";
        }
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=nums2.size()-1;
        while(i<j){
            res+=nums2[j];
            j--;
            res-=nums2[i];
            i++;
        }
        int l=0;
        int h=nums2.size()-1;
        int m=l+(h-l)/2;
        if(nums2.size()%2!=0){
            res+=nums2[m];
        }
        return res;
    }
};