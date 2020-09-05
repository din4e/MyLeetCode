#include<bits/stdc++.h>
using namespace std;
int T,n,L;
int main(){
  cin>>T;
  while(T--){
    int v[1000]={0};
    cin>>L>>n;
    while(n--){
      int l,r;
      cin>>l>>r;
      while(l<=r){
        ++v[l++];
      }
    }
    for(int i=1;i<=L;++i) cout<<v[i]<<" ";cout<<"\n";
  }
  return 0;
}