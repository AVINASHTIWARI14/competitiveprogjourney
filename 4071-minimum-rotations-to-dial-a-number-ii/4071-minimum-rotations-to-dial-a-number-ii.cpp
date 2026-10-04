class Solution {
bool check(int n,string s,int m){
    int cost=0;
int ini=0;
for(int i=0;i<s.size();i++){
    int ch=s[i]-'0';
    int opt1=abs(ini-ch);
    int opt2=10-opt1;
    cost+=min(opt1,opt2);
    ini=ch;
}
for(int k=0;k<n;k++){
    int newcost=cost;
    if(k==0){
        int first=s[0]-'0';
        int last=s[n-1]-'0';
        int old=abs(first-0);
        int newd=abs(last-0);
        newcost-=min(old,10-old);
        newcost+=min(newd,10-newd);
    }else{
        int prev=s[k-1]-'0';
        int curr=s[k]-'0';
        int last=s[n-1]-'0';

        int old=abs(prev-curr);
        int newd=abs(prev-last);
         newcost-=min(old,10-old);
        newcost+=min(newd,10-newd);
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
                if(check(n,s,m)){
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

        int res=bs(n,s);
        return res;
        
    }
};