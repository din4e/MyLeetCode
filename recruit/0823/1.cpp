#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,j;
    cin>>n>>k;
    vector<int> v(n-1);
    for(int i=1;i<=n;++i){
        if(i<k) cin>>v[i-1];
        else if(i>k) cin>>v[i-2];
        else cin>>j;
    }
    for(auto &it:v) cout<<it<<" ";
}