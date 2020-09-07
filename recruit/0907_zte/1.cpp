#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
int n,m;
int main(){
    cin>>n>>m;
    int res=0;
    vector<bool> yes(n,false);
    vector<int> a(n);
    while(m--){
        int sum=0;
        for(int i=0;i<n;++i){
            cin>>a[i];
            sum+=a[i];
        }
        sum/=n;
        for(int i=0;i<n;++i)
            if(a[i]>sum&&!yes[i]){
                yes[i]=true;
            }
    }
    for(int i=0;i<n;++i){
        if(yes[i]) ++res;
    }
    cout<<res;
}