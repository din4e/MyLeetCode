#include<bits/stdc++.h>
using namespace std;
int m,n;
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
void dfs(vector<vector<char>> &map,int i,int j){
    // if(0>i||i>=m||0>j||j>=n) return ;
    map[i][j]='0';
    for(int k=0;k<4;++k){
        int x=i+dir[k][0],y=j+dir[k][1];
        if(0<=x&&x<m&&0<=y&&y<n&&map[x][y]=='1'){
            dfs(map,x,y);
        }
    }
}// .....
int main(){
    cin>>m;
    cin>>n;
    vector<vector<char> > map(m,vector<char>(n));
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>map[i][j];
        }
    }
    int res=0;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(map[i][j]=='1'){
                dfs(map,i,j);
                ++res;
            }
        }
    }
    cout<<res<<"\n";
    return 0;
}