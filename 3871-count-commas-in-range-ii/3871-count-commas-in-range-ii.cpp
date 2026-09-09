class Solution {
public:
    long long countCommas(long long n) {
       long long res=0;
       long long start=1000;
       int comma=1;
       while(start<=n){
        long long end=start*1000-1;
        end=min(n,end);
        long long count=end-start+1;
        res+=count*comma;
        start=start*1000;
        comma++;
       }
       return res;

    }
};