class Solution {
public:
    
    //문제, 가장 넓은 섬의 크기를 반환하시오
        
    int dfs(int sr, int sc, int h, int w, vector<vector<int>>& grid){
         int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        int x ; int y;
        grid[sr][sc]=0;
        int m=0;
        for(int i=0; i<4; i++){
            x=sc+dx[i];
            y=sr+dy[i];            
            if(x>=0 && y>=0 && x<w && y<h && grid[y][x]==1){
                m+=dfs(y,x,h,w,grid);
            }
        }        
        return m+1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       
        int h= grid.size();
        int w= grid[0].size();
        int maxArea=0;
        for(int j=0; j<h; j++)
            for(int i=0; i<w; i++){
                if(grid[j][i]==1){
                    maxArea=max(dfs(j,i,h,w,grid),maxArea);
                    cout << j << " : " << i << endl;
                    
                }
            }
        return maxArea;    
    }
    
};