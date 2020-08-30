#include<bits/stdc++.h>
using namespace std;
long long n,m;
string s;
int res=0;
unordered_map<string,int> umap;
bool check(string s){
    long long sum=0;
    if(n==1) return true;
    if(n==2) return (s[0]-'0')%2==0;
    if(n==5) return s[0]=='5'||s[0]=='0';
    for(int i=0;i<m;++i){
        sum=sum*10+s[i]-'0';
    }
    return sum%n==0;
}
void dfs(int b){
    if(b==m){
        if(!umap[s]&&check(s)){
            ++res;
        }
        ++umap[s];
        return ;
    }
    for(int i=b+1;i<m;++i){
        swap(s[b],s[i]);
        if(s.back()!='0') dfs(b+1);
        swap(s[b],s[i]);
    }
}
int main(){
    cin>>m>>n;
    if(m==0||n==0) {
        cout<<0;
        return 0;
    }
    s=to_string(m);
    m=s.size();
    // cout<<s<<'\n';
    dfs(0);
    cout<<res;
    return 0;
}
