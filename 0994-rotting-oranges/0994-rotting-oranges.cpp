class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
                    queue<pair<pair<int,int>,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
            }
        }
        int time=0;
        while(!q.empty()){
            int a=q.front().first.first;
            int b=q.front().first.second;
            int t=q.front().second;
            time=max(time,t);
            q.pop();
            if(a-1<n&&a-1>=0&&grid[a-1][b]==1){
                q.push({{a-1,b},t+1});
                grid[a-1][b]=2;

            }
            if(a+1<n&&a+1>=0&&grid[a+1][b]==1){
                q.push({{a+1,b},t+1});
                grid[a+1][b]=2;

            }
            if(b-1<m&&b-1>=0&&grid[a][b-1]==1){
                q.push({{a,b-1},t+1});
                grid[a][b-1]=2;

            }
            if(b+1<m&&b+1>=0&&grid[a][b+1]==1){
                q.push({{a,b+1},t+1});
                grid[a][b+1]=2;

            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
            return time;
    }
};