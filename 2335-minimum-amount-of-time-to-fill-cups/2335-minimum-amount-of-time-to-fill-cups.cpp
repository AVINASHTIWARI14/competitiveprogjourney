class Solution {
public:
    int fillCups(vector<int>& amount) {
        int count=0;
        while(*max_element(amount.begin(),amount.end())!=0){
        sort(amount.begin(),amount.end());
        amount[2]--;
        amount[1]--;
        count++;
        }
        return count;
    }
};