#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int m=s.size();
    vector<int> v(m);
    for(int i=0;i<m;++i){
        v[i]=s[i]-'0';
    } 
    //exit(0);
    // vector<vector<int>> next(10,vector<int>(m+1,m));
    // for(int i=m-1;i>=0;i--){
    //     for(int j=0;j<=9;j++){
    //         if(v[i]==j) next[j][i]=i;
    //         else next[j][i]=next[j][i+1];
    //     }
    // }
    // for(int i=0;i<=9;++i){
    //     for(int j=0;j<=m;j++){
    //         cout<<next[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    int n;
    int a,b;
    int tmp;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;++i){
        cin>>a[i]>>b[i];
    }
    int real=1;
    for(int i=1;i<n;i++){
        if(b[real-1]==a[i]){
            b[real-1]=b[i];
        }
        else{
            a[real]=a[i];
            b[real]=b[i];
            ++real;
        }
    }
    cout<<real;
    n=real;
    for(int i=0;i<n;++i){
        //tmp=next[0][a[i]];
        for(auto &it:v)
            if(it==a[i]) it=b[i];
    }
    for(auto it:v) cout<<it;
    return 0;
}