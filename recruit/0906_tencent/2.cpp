#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> fa;
inline int find(int x){
    if(fa[x]==x) return x;
    else return fa[x]=find(fa[x]);
}
int main(){
    cin>>n>>m;
    int t,b,e;
    fa.resize(n);
    for(int i=0;i<=n;++i) fa[i]=i;
    while(m--){
        cin>>t;
        cin>>b;
        t--;
        while(t--){
            cin>>e;
            if(find(fa[b])!=find(fa[e])){
                fa[find(b)]=fa[find(e)];
            }
        }
    }
    int src=find(0);
    int res=0;
    for(int i=0;i<n;++i)
        if(find(i)==src) ++res;
    cout<<res; 
}

// #include <bits/stdc++.h>
// using namespace std;
// int n,m;
// vector<int> fa;
// inline int find(int x){
//     if(fa[x]==x) return x;
//     else return fa[x]=find(fa[x]);
// }
// int main(){
//     cin>>n>>m;
//     int t;
//     fa.resize(n);
//     for(int i=0;i<=n;++i) fa[i]=i;
//     while(m--){
//         cin>>t;
//         vector<int> v(t);
//         for(auto &it:v) cin>>it;
//         for(int i=1;i<t;++i){
//             if(find(fa[v[0]])!=find(fa[v[i]])){
//                 // fa[fa[v[i]]]=fa[v[0]];
//                 fa[find(v[i])]=fa[find(v[0])];
//             }
//         }
//     }
//     int src=find(fa[0]);
//     int res=0;
//     for(auto &it:fa)
//         if(find(it)==src) ++res;
//     cout<<res; 
// }