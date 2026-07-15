class Solution {
    void dfsfrows(int i ,int j,vector<vector<char>>& board,int n,int m){
        //  i=0;
         if(i<n&&i>=0&&j>=0&&j<m&&board[i][j]=='X'){
            return;
         }
        if(i<n&&i>=0&&j>=0&&j<m&&board[i][j]!='$'&&board[i][j]!='X'){
            board[i][j]='$';
         dfsfrows(i+1,j,board,n,m);
         dfsfrows(i-1,j,board,n,m);
         dfsfrows(i,j+1,board,n,m);
         dfsfrows(i,j-1,board,n,m);
         return;
        }
    }
    void dfsfcoloumn(int j,int i ,vector<vector<char>>& board,int n,int m){
        //  i=0;
                  if(i<m&&i>=0&&j>=0&&j<n&&board[j][i]=='X'){
            return;
         }
        if(i<m&&i>=0&&j>=0&&j<n&&board[j][i]!='$'&&board[j][i]!='X'){
            board[j][i]='$';
         dfsfcoloumn(j+1,i,board,n,m);
         dfsfcoloumn(j-1,i,board,n,m);
         dfsfcoloumn(j,i+1,board,n,m);
         dfsfcoloumn(j,i-1,board,n,m);
         return;
        }
    }
    void dfslrows(int i,int j ,vector<vector<char>>& board,int n,int m){
        //  i=n-1;
                  if(i<n&&i>=0&&j>=0&&j<m&&board[i][j]=='X'){
            return;
         }
        if(i<n&&i>=0&&j>=0&&j<m&&board[i][j]!='$'&&board[i][j]!='X'){
            board[i][j]='$';
         dfslrows(i+1,j,board,n,m);
         dfslrows(i-1,j,board,n,m);
         dfslrows(i,j+1,board,n,m);
         dfslrows(i,j-1,board,n,m);
         return;
        }
    }
    void dfslcoloumn(int j ,int i,vector<vector<char>>& board,int n,int m){
        //  i=m-1;
                  if(i<m&&i>=0&&j>=0&&j<n&&board[j][i]=='X'){
            return;
         }
        if(i<m&&i>=0&&j>=0&&j<n&&board[j][i]!='$'&&board[j][i]!='X'){
            board[j][i]='$';
         dfslcoloumn(j+1,i,board,n,m);
         dfslcoloumn(j-1,i,board,n,m);
         dfslcoloumn(j,i+1,board,n,m);
         dfslcoloumn(j,i-1,board,n,m);
         return;
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        int i=0;
        //pehli row
        for(int j=0;j<m;j++){
            i=0;
            if(board[i][j]=='O'){
                dfsfrows(i,j,board,n,m);
            }
        }
        //pehla coloumn
        for(int j=0;j<n;j++){
            i=0;
            if(board[j][i]=='O'){
                dfsfcoloumn(j,i,board,n,m);
            }
        }
        //last row 
        for(int j=0;j<m;j++){
            i=n-1;
            if(board[i][j]=='O'){
                dfslrows(i,j,board,n,m);
            }
        }
        //last coloumn
        for(int j=0;j<n;j++){
            i=m-1;
            if(board[j][i]=='O'){
                dfslcoloumn(j,i,board,n,m);
            }
        }
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(board[i][j]=='O'){
            board[i][j]='X';
        }
    }
   }
   
    
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(board[i][j]=='$'){
            board[i][j]='O';
        }
    }
   }
    



        
    }
};