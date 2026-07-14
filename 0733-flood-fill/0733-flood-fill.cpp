class Solution {
    void dfs(int sr, int sc,vector<vector<int>>& res,vector<vector<int>>& image,int color,int rows[] , int columns[],int cc){
        res[sr][sc]=color;
    
    int n=image.size();
    int m=image[0].size();
    for(int i=0;i<4;i++){
        int a=sr+rows[i];
        int b=sc+columns[i];
    if(a>=0&&a<n&&b>=0&&b<m&&image[a][b]==cc &&res[a][b]!=color){
        dfs(a , b , res,image,color,rows,columns,cc);
    }
    }
    }
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int cc=image[sr][sc];
       vector<vector<int>>res=image;
        int rows[]={-1,0,+1,0};
        int columns[]={0,1,0,-1};
        dfs(sr,sc,res , image,color,rows,columns,cc);
        return res;
    }
};