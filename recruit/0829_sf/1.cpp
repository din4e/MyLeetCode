#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> a(100000); 
    while(cin>>n){
        int l=0,res=n;
        for(int i=0;i<n;++i) {
            cin>>a[i];
        }
        for(int i=n-1;i>=0;--i){
            int j;
            if(a[i]==-1) res=1;else
            for(j=0;j<a[i]&&i-j>0;++j)
                if(a[i-j]!=(a[i-j-1]-1)&&a[i-j]!=-1){
                    res=min(res,j+1);
                    break;
                }
            i=i-j;
        }
        cout<<res<<'\n';
    }
    return 0;
}