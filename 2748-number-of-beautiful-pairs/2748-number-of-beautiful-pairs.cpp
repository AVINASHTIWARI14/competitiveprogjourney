class Solution {
   int check(int a,int b){
        int bs=b%10;
        string s=to_string(a);
        reverse(s.begin(),s.end());
        a=stoi(s);
        int as=a%10;
        return gcd(as,bs);
    }
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(check(nums[i],nums[j])==1)
                count++;
            }
        }
        return count;
    }
};