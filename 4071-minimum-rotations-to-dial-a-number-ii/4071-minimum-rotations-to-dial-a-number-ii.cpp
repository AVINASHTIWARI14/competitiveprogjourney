class Solution {
    bool check(int m,int n,string s){
        int ini=0;
        int cost=0;
        for(auto c:s){
            int dig=c-'0';
            int opt1=abs(ini-dig);
            int opt2=10-opt1;
            cost+=min(opt1,opt2);
            ini=dig;
        }
        int newcost=0;
        for(int i=0;i<n;i++){
            newcost=cost;
            if(i==0){
                int first=s[0]-'0';
                int last=s[n-1]-'0';
                int oldlink=abs(first-0);
                int newlink=abs(0-last);
                newcost-=min(oldlink,10-oldlink);
                newcost+=min(newlink,10-newlink);
            }else{
                int kth=s[i]-'0';
                int kthprev=s[i-1]-'0';
                int last=s[n-1]-'0';
                int oldlink=abs(kthprev-kth);
                int newlink=abs(kthprev-last);
                newcost+=min(newlink,10-newlink);
                newcost-=min(oldlink,10-oldlink);
            }
        if(newcost<=m)
            return true;
        }
        return false;
    }
    int bs(int n,string s){
        int res=0;
        int l=0;
        int h=5*n;
        while(l<=h){
            int m=l+(h-l)/2;
            if(check(m,n,s)){
                res=m;
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return res;
    }
public:
    int minRotations(int n, string s) {
        return bs(n,s);
    }
};