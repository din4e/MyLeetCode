#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        bool T[12]={false};
        bool B[12]={false};
        bool W[12]={false};
        int cnt[10]={0}; 
        int t,b,w;t=b=w=0;
        string s; 
        for(int i=0;i<7;++i){
            cin>>s;
            if(s[1]=='T') T[s[0]-'0']=true,++t;
            else if(s[1]=='B') B[s[0]-'0']=true,++b;
            else if(s[1]=='W') W[s[0]-'0']=true,++w;
            ++cnt[s[0]-'0'];
        }

        bool f=true;
        if(t<=3&&b<=3&&w<=3){
            for(int i=1;i<10;++i) {
                if(cnt[i]>1) {
                    f=false;break;
                }
                if(T[i]&&(T[i-1]||T[i+1])){
                    f=false;break;
                }
                if(B[i]&&(B[i-1]||B[i+1])){
                    f=false;break;
                }    
                if(W[i]&&(W[i-1]||W[i+1])){
                    f=false;break;
                }                
            }

        }
        else f=false;
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}