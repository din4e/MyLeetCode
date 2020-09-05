#include<bits/stdc++.h>
using namespace std;
int T,n,L;
int main(){
  cin>>T;
  int n,m;
  struct z{
    int aa,i;
  };
  vector<z> a(1001);
  vector<int> b(1001);
  while(T--){
    cin>>n>>m;
    vector<int> res(n,-1);
    for(int i=0;i<n;++i) {
      cin>>a[i].aa;
      a[i].i=i;
    }
    for(int i=0;i<m;++i) cin>>b[i];
    sort(a.begin(),a.begin()+n,[](z b,z c){return b.aa==c.aa?b.i<c.i:b.aa<c.aa;});
    sort(b.begin(),b.begin()+m);
    int f=0;
    int c=0;
    while(f<m&&c<n){
      while(f<m&&a[c].aa>b[f]){
        ++f;//cout<<f<<" ";
      }
      if(f<m) {res[a[c].i]=f+1;++c;++f;}
    }
    for(int i=0;i<n;++i) cout<<res[i]<<" ";cout<<"\n";
  }
  return 0;
}