#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> m(n,vector<int>(n));
    for(auto &r:m) for(auto &it:r) cin>>it;
    for(auto &r:m) for(auto &it:r) cout<<it;
    return 0;
}