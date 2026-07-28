class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        string res="";
        if(s.size()%2!=0){
            string dummy1="";
           for(int i=0;i<n/2;i++){
              dummy1+=s[i];
              
           }

           sort(dummy1.begin(),dummy1.end());
              int i=0;
              int j=s.size()-1;
              int mid=(i+j)/2;
              string otherend=dummy1;
              reverse(otherend.begin(),otherend.end());
              res=dummy1+s[mid]+otherend;
        }else{
            string dummy2="";
            for(int k=0;k<n/2;k++){
dummy2+=s[k];
            }
            sort(dummy2.begin(),dummy2.end()); 
            string endi=dummy2;
            reverse(endi.begin(),endi.end());
            res=dummy2+endi;

        }
        return res;
    }
};