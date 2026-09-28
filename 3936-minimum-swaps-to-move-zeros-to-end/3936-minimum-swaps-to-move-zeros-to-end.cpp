class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
     
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
        }
        int c2=count;
        int cc=0;
        // for(int i=nums.size()-1;i>=count;i--){
        //     if(nums[i]==0){
        //         cc++;
        //     }
        // }
        int i=nums.size()-1;
    while(count>0&&i>=0){
            if(nums[i]==0){
                cc++;
                i--;
                count--;
            }else{
             i--;
                count--;}
        }
        return c2-cc;
    }
};