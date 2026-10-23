class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int res=0;
        for(int i=0;i<hours.size();i++){
            for(int j=i+1;j<hours.size();j++){
                
                int a=hours[i]+hours[j];
                if(a%24==0)
                res++;
            }
        }
        return res;
        
    }
};