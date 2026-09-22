//112256   7
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int cost=0;
        int count=0;
        if(costs[0]>coins){
            return 0;
        }
        for(int i=0;i<costs.size();i++){
            cost+=costs[i];
            if(cost>coins){
                break;
            }else{
                count++;
            }
        }
        return count;
    }
};