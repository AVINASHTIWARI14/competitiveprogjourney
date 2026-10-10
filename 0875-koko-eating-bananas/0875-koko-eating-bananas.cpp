// ceil(pile[i]/gueed per hour)
// guess is bana eating in each hour ie' pile[i]/guess
// guess is monotonic 
// search space - l=0  h=sum of arr 




class Solution {
    bool check(vector<int>& piles, int ho,int m){
        long long ph=0;
        double a=(double)(m);
        for(auto i:piles){
            double b=(double)(i);
            ph+=ceil(b/a);
            // cout<<ph<<" ";
        }
        // cout<<"   ";
        if(ph<=ho){
            return true;
        }
        return false;
    }
public:
    int minEatingSpeed(vector<int>& piles, int ho) {
        int res=0;
        int l=1;
        int h=*max_element(piles.begin(),piles.end());
        // int h=accumulate(piles.begin(),piles.end(),0);
        while(l<=h){
            int m=l+(h-l)/2;
            if(check(piles,ho,m)){
                res=m;
                h=m-1;  
            }else{
                l=m+1;
            }
        }
        return res;
    }
};