class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //{{r,c},t}
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>visited(n,vector<int>(m,0));
        int ones=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    visited[i][j]=2;
                }
                if(grid[i][j]==1)
                {
                    ones++;
                }
            }
        }
        int tm=0;
        int dir[]={-1,0,+1,0};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            tm=max(tm,t);
            //up,down,left,right check
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow=r+dir[i];
                int ncol=c+dir[3-i];
                if(ncol>=0 && ncol <m && nrow>=0 && nrow<n && visited[nrow][ncol]!=2 && grid[nrow][ncol]==1)
                {
                    ones--;
                    q.push({{nrow,ncol},t+1});
                    visited[nrow][ncol]=2;
                }
            }
        }
        if(ones>0)
        {
            return -1;
        }
        return tm;
       
    }
};