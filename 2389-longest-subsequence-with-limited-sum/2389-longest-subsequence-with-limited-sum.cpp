class Solution {
    // int check(int a,vector<int>& nums){
    //     int count=0;
    //     int maxcount=0;
    //     sort(nums.begin(),nums.end());
    //     for(int i=0;i<nums.size();i++){
    //         int value=0;
    //          count=0;
    //         for(int j=i;j<nums.size();j++){
    //             value+=nums[j];
    //             count++;

    //             if(value<=a){
    //               maxcount=max(maxcount,count);
    //             }
    //         }
    //     }
    //     return maxcount;
    // }
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<queries.size();i++){
            // int c=check(queries[i],nums);
            // res.push_back(c);
            int sum=0;
            int count=0;
            for(int j=0;j<nums.size();j++ ){
                sum+=nums[j];
                if(sum<=queries[i]){
                    count++;
                }
                
            }
            res.push_back(count);
        }
        return res;
    }
};