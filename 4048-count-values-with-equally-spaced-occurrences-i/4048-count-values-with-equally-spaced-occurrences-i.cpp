class Solution {
    int mattar(int a , vector<int>&nums){
        vector<int>temp(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(a==nums[i]){
                temp[i]=1;
            }
        }
        // int x=0;
        // int y=0;
        // int z=0;
        vector<int>three;
        for(int i=0;i<temp.size();i++){
            // if(x!=1&&temp[i]==1){
            //     x=i;
            // }
            // else if(y!=1&&temp[i]==1){

            // }
            if(temp[i]==1){
                three.push_back(i);
            }
        }
        int x=three[0];
        int y=three[1];
        int z=three[2];
        if(y-x==z-y){
            return 1;
        }
        return 0;

    }
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<int>threec;
        unordered_set<int>check(nums.begin(),nums.end());
        int a=check.size();
        vector<int>demo(a,0);
        demo.assign(check.begin(),check.end());
        for(int i=0;i<demo.size();i++){
                int count=0;
            for(int j=0;j<nums.size();j++){
                if(demo[i]==nums[j]){
                    count++;
                }
            }
                    if(count==3){
                        threec.push_back(demo[i]);
                    }
        }
        int res=0;
        for(int i=0;i<threec.size();i++){
            int value=mattar(threec[i],nums);
            res+=value;
        }
        return res;

    }
};