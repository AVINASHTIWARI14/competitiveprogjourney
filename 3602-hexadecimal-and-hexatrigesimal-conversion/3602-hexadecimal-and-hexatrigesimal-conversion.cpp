class Solution {
    string hex(int n){
        string hexa="0123456789ABCDEF";
        string res="";
        while(n){
            int a=n%16;
            res+=hexa[a];
            n=n/16;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    string hextri(int n){
        string hexa="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string res="";
        while(n){
            int a=n%36;
            res+=hexa[a];
            n=n/36;
        }
        reverse(res.begin(),res.end());
        return res;
    }
public:
    string concatHex36(int n) {
        int hexa=n*n;
        int trihexa=n*n*n;
        return hex(hexa)+hextri(trihexa);
    }
};