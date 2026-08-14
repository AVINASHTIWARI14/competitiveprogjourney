class Solution {
public:
    int countOfSubstrings(string word, int k) {
        int count=0;
        for(int i=0;i<word.size();i++){
            string s="";
            for(int j=i;j<word.size();j++){
                s+=word[j];
                if(s.size()>=k+5){
              if(s.find('a')!=string::npos &&s.find('e')!=string::npos &&s.find('i')!=string::npos &&s.find('o')!=string::npos &&s.find('u')!=string::npos){
                int consocount=0;
               for(int k=0;k<s.size();k++){
            
                if(s[k]=='a'||s[k]=='e'||s[k]=='i'||s[k]=='o'||s[k]=='u'){
                    continue;
                }else
                   
                consocount++;
               }
               if(consocount==k){
               count++;}
              }}
            }
        }
        return count;
    }
};