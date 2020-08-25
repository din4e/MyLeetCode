#include<bits/stdc++.h>
// 第一题，定住第n棵树让其他数长1，相当于让这个第n棵树减1，最后统计一下初始的每棵树和最矮树的差，把这些差加和就是结果
using namespace std;
long long res=0;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i)
        cin>>v[i];
    if(n==1) {
        cout<<0;return 0;
    }
    if(n==2){
        cout<<max(v[0],v[1])-min(v[0],v[1]);return 0;
    }
    int mini=0,minv=v[0];
    int maxi=0,maxv=v[0];
    for(int i=1;i<n;++i){
        if(minv>v[i]){
            mini=i;
            minv=v[i];
        }
    }
    for(int i=0;i<n;++i)
        v[i]-=minv;
    while(1){
        int maxi=0,maxv=v[0];
        for(int i=1;i<n;++i){
            // if(minv>v[i]){
            //     mini=i;
            //     minv=v[i];
            // }
            if(maxv<v[i]){
                maxi=i;
                maxv=v[i];
            }
        }
        if(v[0]==maxv) break;
        else {
            // for(int i=0;i<n;++i)
            //     if(i!=maxi) ++v[i];
            --v[maxi];
            ++res;
            // for(int i=0;i<v.size();++i)
            //     cout<<v[i]<<" ";cout<<"\n";
        }
    }
    cout<<res;
    return 0;
}