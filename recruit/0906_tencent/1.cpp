#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;
    cin>>m;
    vector<int> b(m);
    for(auto &it:b) cin>>it;
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    vector<int> res;
    int i=0,j=0;
    while(i<n&&j<m){
        if(a[i]>b[j]){
            ++i;
        }else if(a[i]<b[j]){
            ++j;
        } else
        {
            res.push_back(a[i]);
            ++i,++j;
        }
    }
    for(auto &it:res) cout<<it<<" ";
}