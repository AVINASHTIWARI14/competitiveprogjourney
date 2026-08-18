class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(k==nums.size()){
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
        //[3,9,2,1,7]  k=3    if i=0 3 9 2
        //if i=1  9 2 1
        //if i=2  2 1 7
        //if i=3  
        

        // vector<vector<int>>subs;
            vector<int>subarr;
        for(int i=0;i<=nums.size()-k;i++){
            for(int j=i;j<i+k;j++){
                subarr.push_back(nums[j]);
            }
            // subs.push_back(subarr);
            // subarr.clear();
        }
        // 3 9 2
        // 9 2 1
        // 2 1 7
        sort(subarr.begin(),subarr.end());
        vector<int>freq(51,0);
        for(int i=0;i<subarr.size();i++){
            freq[subarr[i]]+=1;
        }
        for(int i=0;i<freq.size();i++){
            cout<<freq[i]<<" ";
        }
        subarr.clear();
        for(int i=0;i<freq.size();i++){
            if(freq[i]==1)
            subarr.push_back(i);
        }
        if(subarr.empty())
        return -1;
        else
        return subarr[subarr.size()-1];      
    }
};