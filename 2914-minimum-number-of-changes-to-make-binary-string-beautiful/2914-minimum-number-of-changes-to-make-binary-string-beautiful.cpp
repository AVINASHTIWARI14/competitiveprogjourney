


// ip 00101110111010       op 4
// ip 10010100000111001101011000000010110011       op 8



//create a two sized fixed window and if the elemnets in the window are different just plus one to the result and if the elements in the window are same plus 0 to the result .
class Solution {
public:
    int minChanges(string s) {
       int i=0;
       int j=1;
       int count=0;
       while(i<s.size()-1&&j<s.size()){
        if(s[i]==s[j]){
            i=j+1;
            j=i+1;
        }else{
            count+=1;
            i=j+1;
            j=i+1;
        }
       }
       return count;
    }
};