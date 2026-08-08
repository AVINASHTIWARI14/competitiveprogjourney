class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        vector<int>dummy;
        int a=target.size();
        
        for(int i=1;i<=target[a-1];i++){
            dummy.push_back(i);
        }
int i=0;
int j=0;
while(i<target.size()&&j<dummy.size()){
    if(target[i]==dummy[j]){
        res.push_back("Push");
        i++;
        j++;
    }else{
        res.push_back("Push");
        res.push_back("Pop");
        j++;
    }
}
        return res;
    }
};