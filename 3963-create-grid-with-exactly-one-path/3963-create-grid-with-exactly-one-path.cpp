class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>grid;
        for(int i=0;i<m;i++){
            string row="";
            for(int j=0;j<n;j++){
                row+='#';
            }
            grid.push_back(row);
        }
        //first row aur first column obstacke ke bina 
 for(int i=0;i<n;i++){    //row
         grid[0][i]='.';}
 for(int j=0;j<m;j++){    //row
         grid[j][n-1]='.';//col
     }
     return grid;
    }
};