#include<bits/stdc++.h>
using namespace std;
int res=0;

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
        if(maxv<v[i]){
            maxi=i;
            maxv=v[i];
        }
    }
    int sum=0;
    for(int i=0;i<n;++i){
        sum+=maxv-v[i];
    }
    while(sum%(n-1)!=0){
        sum+=n;
    }
    cout<<sum/(n-1);
    return 0;
}