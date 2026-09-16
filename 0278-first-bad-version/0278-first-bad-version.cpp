// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // vector<int>version;
        // for(int i=1;i<=n;i++){
        //     version.push_back(i);
        // }
        int res=0;
        int l=1;
        int h=n;
        // int h=version.size()-1;
        while(l<=h){
int m=l+(h-l)/2;
if(isBadVersion(m)){
    res=m;
    h=m-1;

}else{
    l=m+1;
}

        }
        return res;
       
    }
};