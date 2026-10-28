class Solution {
    bool pali(string a) {
        int i = 0;
        int j = a.size() - 1;
        while (i <= j) {
            if (a[i] != a[j]) {
             return false;
            }
            i++;
            j--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {

        string a = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' ||
                s[i] >= '0' && s[i] <= '9') {
                a += s[i];
            }
        }
        for (int i = 0; i < a.size(); i++) {
            
            if(a[i]>='A'&&a[i]<='Z'){
                a[i]+=32;
            }
        }
         for(int i=0;i<a.size();i++){
            cout<<a[i];
        }

        return pali(a);
    }
};