#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    cin>>k;
    vector<int> a(k),b(k);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    cin>>n;
    vector<int> c(n),d(n);
    for(auto &it:c) cin>>it;
    for(auto &it:d) cin>>it;

    vector<int> next(k,-1);
    int i=0,j=-1;
    while(i<k-1){
        if(j==-1||(a[i]==a[j]&&b[i]==b[j])){
            next[++i]=++j;
        }
        else j=next[j];
    }
    i=0;j=0;
    while(i<n&&j<k){
        if(j==-1||(c[i]==a[j]&&d[i]==b[j])){
            ++i,++j;
        }    
        else j=next[j];
    }
    // cout<<i<<" "<<j<<"\n";
    if(j==k) cout<<i-k+1;
    else cout<<0;
    return 0;
}