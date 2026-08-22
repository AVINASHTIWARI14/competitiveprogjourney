class Solution {
    int pro(int n){
        int p=1;
        while(n){
            int d=n%10;
            p*=d;
            n=n/10;
        }
        return p;
    }
    int sum(int n){
        int p=0;
        while(n){
            int d=n%10;
            p+=d;
            n=n/10;
        }
        return p;
    }
public:
    bool checkDivisibility(int n) {
        int res=pro(n)+sum(n);
        if(n%res==0){
            return true;
        }
        return false;
    }
};