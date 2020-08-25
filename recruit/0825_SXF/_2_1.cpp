#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // int m=s.size();
    // vector<int> v(m);
    // for(int i=0;i<m;++i){
    //     v[i]=s[i]-'0';
    // } 
    int n;
    char a,b;
    cin>>n;
    while(n--){
        cin>>a;getchar();
        cin>>b;
        for(auto &it:s)
            if(it==a) it=b;
    }
    // for(auto it:v) cout<<it;
    cout<<s;
    return 0;
}