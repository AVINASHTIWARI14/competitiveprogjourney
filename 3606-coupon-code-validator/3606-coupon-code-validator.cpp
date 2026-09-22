class Solution {
    bool cvalid(string s){
        if(s==""){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!='_'&&!isalnum(s[i])){
                return false;
            }
        }
        return true;
    }
    bool buscheck(string s){
        if(s!="electronics"&&s!="grocery"&&s!="pharmacy"&&s!="restaurant"){
            return false;
        }
        return true;
    }

public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n=code.size();
            vector<string>res;
            vector<string>ele;
            vector<string>gro;
            vector<string>pha;
            vector<string>rest;
        for(int i=0;i<n;i++){
            if(cvalid(code[i])){
                if(isActive[i]==true){
                    if(buscheck(businessLine[i])){
                        if(businessLine[i]=="electronics"){
                            ele.push_back(code[i]);
                        }
                        if(businessLine[i]=="grocery"){
                            gro.push_back(code[i]);
                        }
                        if(businessLine[i]=="pharmacy"){
                            pha.push_back(code[i]);
                        }
                        if(businessLine[i]=="restaurant"){
                            rest.push_back(code[i]);
                        }
                    }
                }
            }
        }
        sort(ele.begin(),ele.end());
        sort(gro.begin(),gro.end());
        sort(pha.begin(),pha.end());
        sort(rest.begin(),rest.end());
        for(int i=0;i<ele.size();i++){
            res.push_back(ele[i]);
        }       
        for(int i=0;i<gro.size();i++){
            res.push_back(gro[i]);
        }       
        for(int i=0;i<pha.size();i++){
            res.push_back(pha[i]);
        }       
        for(int i=0;i<rest.size();i++){
            res.push_back(rest[i]);
        }       
        return res;
    }
};