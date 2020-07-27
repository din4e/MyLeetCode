# [剑指 Offer 12. 矩阵中的路径](https://leetcode-cn.com/problems/ju-zhen-zhong-de-lu-jing-lcof/)

## 回朔

+ 思路介绍：

```cpp
class Solution {
public:
    int dir[4][2]={{-1,0},{0,-1},{0,1},{1,0}};
    int n,m,l;
    bool func(vector<vector<char>>& board, int i,int j,string word,int k){
        if(k+1==l) return true;
        ++k;
        board[i][j]+=27; // !
        for(int v=0;v<4;++v){
            int x=i+dir[v][0],y=j+dir[v][1];
            if(x<n&&x>=0&&y<m&&y>=0&&k<l&&board[x][y]==word[k]&&func(board,x,y,word,k)){
                board[i][j]-=27; // ! 第一次没有
                return true;
            }
        }
        board[i][j]-=27; // !
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        n=board.size();
        m=board[0].size();
        l=word.size();
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){ // ?
                if(board[i][j]==word[0]&&func(board,i,j,word,0)) 
                    return true;
            }
        }
        return false;
    }
};
```
