class Solution {
    bool check(vector<int>& bd, int n, int k,int m){
        vector<int>zero(bd.size(),0);
        for(int i=0;i<bd.size();i++){
            if(bd[i]<=m){
                zero[i]=1;
            }
        }
      
        cout<<endl;
        int count=0;
        int days=0;
        int i=0;
        int j=0;
        while(j<zero.size()){
            if(zero[j]==1){
                count++;
                j++;
            }else{
                count=0;
                j++;
            }
            if(j-i>=k){
                if(count==k){
                    days++;
                    count=0;
                }
                // count=0;
                    // j++;
                    // i=j;
                    // i++;
            }
            

        }
        if(days>=n){
            return true;
        }
        return false;
    }
public:
    int minDays(vector<int>& bd, int n, int k) {
        int res=0;
        int l=1;
        int h=*max_element(bd.begin(),bd.end());
        while(l<=h){
            int m=l+(h-l)/2;
            if(check(bd,n,k,m)){
                res=m;
                h=m-1;
               
            }
            else{
                l=m+1;
            }
        }
        if(res==0){
            return -1;
        }
        return res;
    }
};