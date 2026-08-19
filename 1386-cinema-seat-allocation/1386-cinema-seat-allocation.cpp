class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& res) {
        /* 
        
        why do we not consider from 1 or till 10
        
        iterating for all rows , creating individual vectors and marking 0 for each occupied 
          
         1 2 3 4 5 6 7 8 9 10
         x  ^ ^         ^    x
        */
        int count=0;
        sort(res.begin(),res.end());

        // for unavailable
        // string actual="";
        // string ques="";
        // for(int i=1;i<=n;i++){
        //     actual+=to_string(i);
        // }
        // for(int i=0;i<res.size();i++){
        //     ques+=to_string(res[i][0]);
        // }
        // for(int i=0;i<actual.size();i++){
        //     if(ques.find(actual[i])==string::npos){
        //         count+=2;
        //     }
        // }
        set<int>check;
        for(int i=0;i<res.size();i++){
            check.insert(res[i][0]);
        }
        // for(int i=1;i<=n;i++){
        //     if(check.find(i)==check.end()){
        //         count+=2;
        //     }

        // }
        count=(n-check.size())*2;

     vector<int>tempu;
     int i=0;
     while(i<res.size()){
        int seat=res[i][0];
        tempu.clear();
        tempu.assign(11,0);
        tempu[0]=-1;
        tempu[1]=-1;
        tempu[10]=-1;
        while(i<res.size()&&res[i][0]==seat){
           tempu[res[i][1]]=-1;
            i++;
        }
       //start
       bool s=true;
       for(int j=2;j<=5;j++){

        if(tempu[j]==-1)
        s=false;
       }
       //mid
       bool m=true;
       for(int j=4;j<=7;j++){
        if(tempu[j]==-1)
        m=false;
       }
       //end
       bool e=true;
       for(int j=6;j<=9;j++){
        if(tempu[j]==-1)
        e=false;
       }
       if(s&&e){
        count+=2;
       }
       else if(s||e||m){
        count+=1;
       }

     }


        return count;
    }
};