class Solution {
    int check(int a ){
        
int sum=0;
        while(a){
            int d=a%10;
            sum+=d;
            a=a/10;
        }
    
        return sum;
    }
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(check(nums[i])==i){
                return i;
            }
        }
        return -1;
    }
};