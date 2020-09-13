#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,k;
    cin>>t;
    vector<vector<int>> map(100,vector<int>(100));
    int a,b,val;
    while(t--){
        cin>>n>>m>>k;
        // fill(map,map[0]+100*100,INT_MAX);
        for(auto &it:map) for(auto &it2:it) it2=INT_MAX;
        vector<vector<int>> nei(n);
        for(int i=0;i<m;++i){
            cin>>a>>b>>val;
            a--,b--;
            if(val<=k){
                map[a][b]=map[b][a]==val; 
                nei[a].push_back(b);
                nei[b].push_back(a);  
                // cout<<a<<" "<<b<<" "<<val<<"\n";
            }
        }
        vector<bool> visit(n,false);
        int res=0;
        int cnt=1;
        visit[0]=true;
        int cost=INT_MAX,costi=-1;
        for(int j=0;j<nei[0].size();++j){
            int tmp=nei[0][j];
            if(!visit[tmp]&&map[0][tmp]<cost){
                cost=map[0][tmp];
                costi=tmp;
                cout<<j<<"TTTTTTTTTT\n";
            }
        }
        if(costi!=-1){
            cnt++;visit[costi]=true;
            for(int k=0;k<n-2;++k){
                int cost=INT_MAX,costi=-1;
                for(int i=0;i<n;++i){
                    if(!visit[i]){
                        for(int j=0;j<nei[i].size();++j){
                            int tmp=nei[i][j];
                            if(visit[tmp]&&map[i][tmp]<cost){
                                cost=map[i][tmp];
                                costi=i;
                                cout<<"asdasda";
                            }
                        }
                    }
                }
                if(costi==-1) break;
                visit[costi]=true;
                // res+=cost;
                cnt++;
                cout<<costi<<" "<<cost<<"\n";
            }            
        }
        if(cnt!=n) {
            cout<<"No\n";
            cout<<cnt<<" "<<res<<"\n";
        }
        else cout<<"Yes\n";
    }
    return 0;
}