#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;getchar(); // ?
    vector<int> v(n),t(m);
    int i=0,cnt=0;
    for(auto &it:v) it=++i;
    for(auto &it:t) cin>>it;
    for(int i=0;i<m;++i){
        if(t[i]==1){
            if(cnt>0){
                if(t[cnt-1]!=0) ++t[cnt-1];
                else t[cnt++]=1; 
            }
            else t[cnt++]=1; 
            //cout<<"A"<<cnt;        
        }
        else {
            if(cnt>0){
                if(t[cnt-1]==0) --cnt;
                else t[cnt++]=0;
            }
            else {t[cnt++]=0;}
        }
    }
    t.resize(cnt);
    // for(auto &it:t) cout<<it<<" ";
    int head=0;
    for(auto it:t){
        if(it==0){
            for(int i=0;i<n;i+=2){
                swap(v[(i+head)%n],v[(i+1+head)%n]);
            }
        }else{
            head=(head+it)%cnt;
        }
    }

    for(int i=0;i<n;i++){
        cout<<v[(head+i)%n]<<" ";
    }
    return 0;
}