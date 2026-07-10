class Solution {
public:
    int countCommas(int n) {

 
int count=0;
   for(int i=1;i<=n;i++){
    string s=to_string(i);
    int x=s.size();
      if(x<4){
        continue;
      }else{
        count++;
      }
   }
        return count;
    }
};