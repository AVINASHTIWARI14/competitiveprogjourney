class Solution {
public:
    int compress(vector<char>& chars) {
        chars.push_back('0');
        int i=0;
        string s="";
        while(i<chars.size()-1){
            char temp=chars[i];
            int count=0;
            while(temp==chars[i]){
                count++;
                i++;
            }
            if(count==1){
                s+=temp;
                
            }else{
                s+=temp;
                s+=to_string(count);
            }

        }
        for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
        chars.clear();
        for(int i=0;i<s.size();i++){
            chars.push_back(s[i]);
        }
        return chars.size();
        
    }
};