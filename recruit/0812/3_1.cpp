#include<bits/stdc++.h>
using namespace std;
struct event{
    int id;
    int l;
    //int t[2];
};

int main(){
    int T;
    cin>>T;
    while(T--){ 
        int n,cnt=0,a,b,c;
        cin>>n;
        vector<event> e(n/2);
        int resi=-1,resl=-1;
        unordered_map<int,int> idmap;
        stack<enent> stk;
        for(int i=0;i<n;++i){
            cin>>a>>b>>c;
            if(idmap.count(b)==0) idmap[b]=cnt++;
            e[idmap[b]].id=b; 
            b=idmap[b];
            if(s.empty()) {
                s.push({b,a});
            }
            else
            {
                
            }
            // if(c==0) e[b].l=a;
            // else {
            //     e[b].l=a-e[b].l;
            //     if(resi==-1){
            //         resi=e[b].id;
            //         resl=e[b].l;
            //     }
            //     else if(e[b].l>resl){
            //         resi=e[b].id;
            //         resl=e[b].l;                    
            //     }
            //     else if(resl==e[b].l&&resi<e[b].id){
            //         resi=e[b].id;
            //         resl=e[b].l;                    
            //     }
            // }
        }
        //for(auto it:e) cout<<it.id<<" "<<it.l<<"\n";
        //vector<vector<int>> m(n,vector<int>(n));
        cout<<resi<<"\n";
    }
    return 0;
}