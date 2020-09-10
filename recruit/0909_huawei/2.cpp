#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dir[4][2]={{-1,0},{0,-1},{0,1},{1,0}};
    int n,m;
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.size()==0||matrix[0].size()==0) 
            return 0;
        n=matrix.size();
        m=matrix[0].size();
        int ans=0;
        auto mem=vector<vector<int>>(n,vector<int>(m,0));
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                ans=max(ans,dfs(matrix,i,j,mem));
            }
        }
        return ans;
    }
    int dfs(vector<vector<int>>& matrix,int i,int j,vector<vector<int>>& mem){
        if(mem[i][j]!=0)
            return mem[i][j];
        ++mem[i][j]; // !
        for(int k=0;k<4;++k){
            int x=i+dir[k][0],y=j+dir[k][1];
            if(x>=0&&x<n&&y>=0&&y<m&&matrix[x][y]>matrix[i][j]){ //!
                mem[i][j]=max(mem[i][j],dfs(matrix,x,y,mem)+1);
            }
        }
        return mem[i][j];
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> c(n,vector<int>(m,0));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>c[i][j];
        }
    }
    Solution s;
    cout<<s.longestIncreasingPath(c);
}