class Solution {
    bool conf(vector<int>&el){
        // for incre 
        bool ret=false;
        int c=0;
        for(int i=1;i<el.size();i++){
            if(el[i]<=el[i-1]){
                c++;
                break;
            }
        }
        for(int i=1;i<el.size();i++){
            if(el[i]>=el[i-1]){
                c++;
                break;
            }
        }
        
    if(c<2){
        return true;
    }
    return false;
    }
    int valid(vector<int>el){
        if(el.size()==1){
            return 1;
        }
        if(conf(el)==true){
        return el.size();    }
        return 0; 
    }
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        vector<vector<int>>check;
        for(int i=0;i<nums.size();i++){
            vector<int>dummy;
            for(int j=i;j<nums.size();j++){
                dummy.push_back(nums[j]);
                check.push_back(dummy);
            }
        }
        int maxi=INT_MIN;
        for(int i=0;i<check.size();i++){
        int cs=0;
            cs=valid(check[i]);
            maxi=max(maxi,cs);
        }
        return maxi;
    }
};