class Solution {
public:
    int maxProduct(int n) {
        // long long maxpro=INT_MIN;
        vector<int>dummy;
        while(n){
            int d=n%10;
            dummy.push_back(d);
            n=n/10;
        }
        // reverse(dummy.begin(),dummy.end());
sort(dummy.begin(),dummy.end());
int a=dummy.size()-1;
return dummy[a]*dummy[a-1];
    
    }
};