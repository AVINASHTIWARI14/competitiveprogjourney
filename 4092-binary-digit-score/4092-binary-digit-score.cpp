class Solution {
    string bin(int a){
        string s="";
        int b=0;
        while(a>=2){
            int c=a%2;
            s+=to_string(c);
             b=a/2;
            a=b;
        }
        // s+=to_string(b);

        return s;
    }
public:
    int calculateScore(int a, int b) {
        string s1=bin(a);
        string s2=bin(b);
        s1+='1';
        s2+='1';
        for(int i=0;i<s1.size();i++){
            cout<<s1[i];
        }
        cout<<"  ";
        for(int i=0;i<s2.size();i++){
            cout<<s2[i];
        }
        int s1c=0;
        int s2c=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='1'){
                s1c++;
            }
        }
        for(int i=0;i<s2.size();i++){
            if(s2[i]=='1'){
                s2c++;
            }
        }
        if(s1c>=s2c){
            return s1c*s2c;
        }
        return (int)(s2c/s1c);
    }
};