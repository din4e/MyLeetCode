#include<bits/stdc++.h>
using namespace std;
string s,res;
int main(){
    getline(cin,s);
    vector<int> map(256,-1);
    for(auto &c:s)
        if(map[int(c)]==-1){
            map[int(c)]=1;
            res+=c;
        }
    cout<<res;
    return 0;
}