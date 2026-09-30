class Solution {
    int check(vector<vector<int>>& mat,int a,int b){
        int row1=0;
        for(int i=0;i<mat[a].size();i++){
            if(mat[a][i]==1){
                row1++;
            }
            if(row1>1)
            return 0;
        }
        int col1=0;
        for(int i=0;i<mat.size();i++){
            if(mat[i][b]==1){
                col1++;
            }
            if(col1>1)
            return 0;
        }
        return 1;
    }
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)
                count+=check(mat,i,j);
            }
        }
        return count;
    }
};