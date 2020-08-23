#include<bits/stdc++.h> // 40
using namespace std;
inline int func(int x){
    int res=0;
    while(x){
        res+=(x%10);
        x/=10;
    }
    return res;
}
int main(){
    int t;
    int n,res;
    cin>>t;
    while(t--){
        cin>>n;res=INT_MIN;
        for(int i=0;i<n/2;++i){
            res=max(res,func(i)+func(n-i));
        }        
        cout<<res<<"\n";
    }
}