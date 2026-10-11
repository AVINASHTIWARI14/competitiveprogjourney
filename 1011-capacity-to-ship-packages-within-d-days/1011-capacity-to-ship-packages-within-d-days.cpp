class Solution {
    bool check(vector<int>& weights, int days,int m){

        int dayscount=1;
        int weight=0;
        for(auto i:weights){
            weight+=i;
            if(weight>m){
                dayscount++;
                weight=i;
            }
        }
        if(dayscount<=days){
            return true;
        }
        return false;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        // sort(weights.begin(),weights.end());
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);
            int res=0;
        while(l<=h){
            int m=l+(h-l)/2;
            if(check(weights,days,m)){
                res=m;
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return res;
    }
};