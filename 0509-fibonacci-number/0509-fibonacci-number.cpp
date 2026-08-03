class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        // vector<int>dp(n+1,-1);
        int prev2=0;
        int prev=1;
        for(int i=2;i<=n;i++){
int curr=prev+prev2;
prev2=prev;
prev=curr;
        }
        return prev;
    }
};