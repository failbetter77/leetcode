class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxarea=0;
        
        int h = grid.size();
        int w = grid[0].size();
        
        unordered_map<int,int> m;
        queue<pair<int,int>> q;
        int max =0;
        for(int j=0;  j<h; j++){
            for(int i=0; i <w; i++){
                if(grid[j][i]==1){
                    q.push({j,i});
                    int cnt=1;   
                    grid[j][i]=0;
                    cout << j<<":" <<i<<"\n";                 
                    while(!q.empty()){
                        int n,m;
                        tie(n,m) = q.front();
                        q.pop();
                               
                        if(m+1<w && grid[n][m+1]==1) {q.push({n,m+1}); grid[n][m+1]=0; cnt++; cout << n<<":" <<m+1<<"\n";}
                        if(n+1<h && grid[n+1][m]==1) {q.push({n+1,m}); grid[n+1][m]=0; cnt++; cout << n+1<<":" <<m<<"\n";}
                        if(n-1>=0 && grid[n-1][m]==1) {q.push({n-1,m}); grid[n-1][m]=0; cnt++; cout << n-1<<":" <<m<<"\n";}
                        if(m-1>=0 && grid[n][m-1]==1) {q.push({n,m-1}); grid[n][m-1]=0; cnt++; cout << n-1<<":" <<m<<"\n";}
                    }
                    if (max<cnt)max=cnt;
                    cout << "\n";
                }
            }
        }
        
        return max;
        
    }
};