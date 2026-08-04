class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int apples=0;
        for(int i=0;i<apple.size();i++){
            apples+=apple[i];
        }
        sort(capacity.begin(),capacity.end());
        reverse(capacity.begin(),capacity.end());
        int a=0;
        int capa=0;
        for(int i=0;i<capacity.size();i++){
            capa+=capacity[i];
            if(capa>=apples){
                a++;
                break;
            }
            a++;
        }
        return a;
    }
};