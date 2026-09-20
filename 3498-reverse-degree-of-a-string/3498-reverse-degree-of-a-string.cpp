// z y x w v u t s r q p o n m l k j i h g f e d c b a 
class Solution {
    // int value(char s){
    //     vector<char>alpha(26,'a');
    //     char ch='z';
    //     alpha[0]=ch;ck(ch);
    //     for(int i=1;i<a
    //     // alpha.push_balpha.size();i++){
    //         ch-=1;
    //         // alpha.push_back(ch);
    //         alpha[i]=ch;
    //     }
    //     int ret=0;
    //     for(int i=0;i<alpha.size();i++){
    //         cout<<alpha[i]<<" ";
    //     }
    //     for(int i=0;i<alpha.size();i++){
    //         if(alpha[i]==s){
    //         ret=i+1;
    //         break;}
    //     }
    //     return ret;
    // }
public:
    int reverseDegree(string s) {
         vector<char>alpha(26,'a');
        char ch='z';
        alpha[0]=ch;
        for(int i=1;i<alpha.size();i++){
        // alpha.push_balpha.size();i++){
            ch-=1;
            // alpha.push_back(ch);
            alpha[i]=ch;
        }
    string se="";
    for(int i=0;i<alpha.size();i++){
        se+=alpha[i];
    }
    for(int i=0;i<se.size();i++){
        cout<<se[i];
    }
        // int sum=0;
        // for(int i=0;i<s.size();i++){
        //     int pro=i+1;
        
        // // sum+=value(s[i])*pro;

        // }
        int sum=0;
        for(int i=0;i<s.size();i++){
            int ind=0;
            int pro=0;
            for(int j=0;j<se.size();j++){
                if(s[i]==se[j]){
                    ind=j+1;
                    break;
                }

            }
            pro=i+1;
            sum+=ind*pro;
        }
        return sum;
    }
};