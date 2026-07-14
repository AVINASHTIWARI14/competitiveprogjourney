class Solution {
    int dfs(vector<vector<int>>& grid,int i , int j,int n ,int m){
            int res=0;
        if(i<0||i>=n||j<0||j>=m||grid[i][j]==0){
          return 1;
        }
        
        if(grid[i][j]==-1){
          return 0;
        }
        grid[i][j]=-1;
       res+= dfs(grid,i+1,j,n,m);
        res+=dfs(grid,i-1,j,n,m);
        res+=dfs(grid,i,j+1,n,m);
        res+=dfs(grid,i,j-1,n,m);
        return res;
}
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int peri=0;
        int  n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
             peri=   dfs(grid , i ,j,n ,m );
            //   return peri;
                }
            }
        }
        return peri;
    }
};