class Solution {
    int pro(int a){
        int prod=1;
        while(a){
            int d=a%10;
            prod*=d;
            a=a/10;
        }
        return prod;
    }
public:
    int smallestNumber(int n, int t) {
        int res=0;
        for(int i=n;i<=100;i++){
            if(pro(i)%t==0){
            res=i;
            break;}
        }
        return res;
    }
};