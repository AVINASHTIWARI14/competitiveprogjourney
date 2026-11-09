class Solution {
    int conn(vector<vector<int>>& grid,int a,int b){
        int rc=0;
        int lc=0;
        for(int i=0;i<grid[a].size();i++){
            if(grid[a][i]==1){
                rc++;
            }
        }
        for(int i=0;i<grid.size();i++){
            if(grid[i][b]==1){
                lc++;
            }
        }
        if(rc>1||lc>1){
            return 1;
        }
        return 0;
    }
public:
    int countServers(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    res+=conn(grid,i,j);
                }
            }
        }
        return res;
    }
};