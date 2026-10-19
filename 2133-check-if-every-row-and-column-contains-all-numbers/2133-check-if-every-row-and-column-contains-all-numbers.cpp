class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        // row
        for(int i=0;i<matrix.size();i++){
            vector<int>dummy;
            // col.push_back(matrix[i][0]);
            for(int j=0;j<matrix[i].size();j++){
                
                dummy.push_back(matrix[i][j]);
            }
            sort(dummy.begin(),dummy.end());
            for(int k=0;k<dummy.size();k++){
                if(k+1!=dummy[k])
                return false;
            }

            
        }

        //coloumn
        // sort(col.begin(),col.end());
        int a=matrix.size();
      int b=0;
        while(a--){
            vector<int>col;
      for(int i=0;i<matrix.size();i++){
        col.push_back(matrix[i][b]);
      }
      sort(col.begin(),col.end());
      for(int j=0;j<col.size();j++){
        if(j+1!=col[j])
            return false;
        
      }
      b++;
        }
    return true;
    }
};