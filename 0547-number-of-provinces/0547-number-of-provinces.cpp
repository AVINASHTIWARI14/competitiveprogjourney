class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int>adj[isConnected.size()];
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int>visited(isConnected.size(),0);
        int count=0;
        for(int i=0;i<isConnected.size();i++){
          if(!visited[i]){
            count++;
            queue<int>q;
            q.push(i);
            visited[i]=1;
            while(!q.empty()){
                int temp=q.front();
                q.pop();
                for(auto in:adj[temp]){
                    if(!visited[in]){
                        visited[in]=1;
                        q.push(in);
                    }
                }
            }
          }
        }

        return count;
    }
};