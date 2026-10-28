class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        if(m==0){
            n1=n2;
            return;
        }
     int i=m-1;
     int j=n-1;
     int k=n1.size()-1;
     while(i>=0&&j>=0){
        if(n1[i]<n2[j]){
            n1[k]=n2[j];
            j--;
            k--;
        }else if(n1[i]>n2[j]){
            n1[k]=n1[i];
            i--;
            k--;
        }else{
            n1[k]=n2[j];
            k--;
            j--;
        }
    
     }
     while(j>=0){
        n1[k]=n2[j];
        k--;
        j--;
     }
     }
};