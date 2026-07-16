class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        vector<int>numstwo=nums;
        // vector<int>res;
        int i=0;
        int j=1;
        while(i<n-1&&j<n){
            if(nums[j]<nums[i]){
                nums[j]=nums[i];
            }else{
                i=j;
                j++;
            }
        }for(int i=0;i<n;i++){
            numstwo[i]=gcd(numstwo[i],nums[i]);
        }
sort(numstwo.begin(),numstwo.end());
// for(int i=0;i<res.size();i++){
//     cout<<res[i]<<" ";
// }
nums.clear();
// if(n%2==0){
    //even
 
    int x=0;
    int z=numstwo.size()-1;
while(x<z){
   nums.push_back(gcd(numstwo[x],numstwo[z]));
   x++;
   z--;
}
for(int i=0;i<nums.size();i++){
    sum+=nums[i];
    
}

// }
// else{
//     //odd

// }

      
   return sum;
    }
};