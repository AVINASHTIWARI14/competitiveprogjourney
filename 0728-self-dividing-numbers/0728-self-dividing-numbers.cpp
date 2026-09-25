class Solution {
    bool calc(int a){
        int b=a;
        vector<int>digi;
        while(a){
            int d=a%10;
            digi.push_back(d);
            a=a/10;
        }
        int count=0;
        for(int i=0;i<digi.size();i++){
            if(b%digi[i]==0)
                count++;
            
        }
        if(count==digi.size()){
            return true;
        }
        return false;

    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int>res;
        for(int i=left;i<=right;i++){
            int a=i;
            string dummy="";
            dummy+=to_string(a);
            if(dummy.find('0')!=string::npos){
                continue;
            }
            else if(calc(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};