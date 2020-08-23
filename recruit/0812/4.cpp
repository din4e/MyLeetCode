#include<bits/stdc++.h>
using namespace std;
int T;
int n,m,trsize;
struct point{
    int x=-1,y=-1;
};
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
vector<vector<char>> mm(51,vector<char>(51)); 
vector<vector<bool>> visit(51,vector<bool>(51,false));
vector<vector<vector<int>>> dist(10,vector<vector<int>>(51,vector<int>(51,INT_MAX)));

void func000(int k,int x,int y,int l){
    if(0<=x&&x<m&&0<=y&&y<n&&mm[x][y]!='#'&&dist[k][x][y]==INT_MAX) {
        dist[k][x][y]=l;
        func000(k,x-1,y,l+1);
        func000(k,x+1,y,l+1);
        func000(k,x,y-1,l+1);
        func000(k,x,y+1,l+1);
    }
}
// void func00(v,vector<point> &tr,vector<vector<char>> &m){
//     for(int t=0;t<trsize;++t){
//         f
//             func000()
//         }
//     }
// }
inline func0(point &a,point &b){
    return abs(a.x-b.x)+abs(a.y-b.y);
}
int func1(point &cur,vector<point> &tr){
    int resi=-1,res=INT_MAX;
    for(int i=0;i<10;++i)
        if(tr[i].x!=-1){
            int distance=func0(tr[i],cur);
            if(res>distance)
                res=distance;resi=i;
        }
    return resi;
}
int func2(int k,vector<point> &tr,vector<vector<vector<int>>> &dist){
    int resi=-1,res=INT_MAX;
    for(int i=0;i<4;++i){
        int x=tr[k].x+dir[i][0],y=tr[k].y+dir[i][1];
        if(0<=x&&x<m&&0<=y&&y<n&&dist[k][x][y]<res){
            res=dist[k][x][y],resi=i;
        }
    }
    return resi;
}
void flash(vector<vector<bool>> &m){
    fill(m[0].begin(),m[0].begin()+51*51,false);
}
int main(){
    cin>>T;
    while(T--){ 
        cin>>m>>n;
        vector<point> tr(10);
        int trsize=0;
        point start,cur;
        //for(auto &col:m) {for(auto &it:col) cin>>it;}
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if('0'<=mm[i][j]&&mm[i][j]<='9'){
                    tr[mm[i][j]-'0']={i,j};
                    ++trsize;
                }
                if(mm[i][j]=='*') start={i,j};
            }
        }
        for(int i=0;i<10;++i) if(tr[i].x!=-1) func000(i,tr[i].x,tr[i].y,0);
        //for(auto it:tr) cout<<it.x<<" "<<it.y<<"\n";
        int status=1,res=-1;
        cur=start;
        while(status){
            if(visit[cur.x][cur.y]) {status=-1;break;}
            else visit[cur.x][cur.y]=true;
            int k=func1(cur,tr);
            if(k==-1) {status=-1;break;}
            int i=func2(k,tr,dist);
            if(i==-1) {status=-1;break;}
            cur.x+=dir[i][0];
            cur.y+=dir[i][1];
            ++res;
            if('0'<=mm[cur.x][cur.y]&&mm[cur.x][cur.y]<='9') {
                mm[cur.x][cur.y]='.';
                flash(visit);
                --trsize;
                if(trsize==0) {break;}
            }
        }
        if(status) cout<<res<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}