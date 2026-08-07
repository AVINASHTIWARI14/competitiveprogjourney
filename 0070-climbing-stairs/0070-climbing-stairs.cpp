class Solution {
    vector<int>res;
public:
    int climbStairs(int n) {
        if(res.empty()){
            res.assign(n+1,-1);
        }
        if(n<=1){
            return 1;
        }
    
      int  prevp=1;
      int  prev=1;
      int curr=0;
        for(int i=2;i<res.size();i++){
        curr=prevp+prev;
        prevp=prev;
        prev=curr;
        }
       return curr;
       
    }
};