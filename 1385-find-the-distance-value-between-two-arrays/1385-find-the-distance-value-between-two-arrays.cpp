class Solution {
    int check(vector<int>&arr2,int a,int d){
        for(int i=0;i<arr2.size();i++){
            if(abs(arr2[i]-a)<=d)
            return 0;
        }
        return 1;
    }
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int res=0;
        for(int i=0;i<arr1.size();i++){
            res+=check(arr2,arr1[i],d);
        }
        return res;
    }
};