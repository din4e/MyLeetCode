#include<bits/stdc++.h>
using namespace std;
int res=0;

int main(){
    int n;
    cin>>n;//getchar();
    vector<int> v(n);
    for(int i=0;i<n;++i)
        cin>>v[i];
    while(1){
        sort(v.begin(),v.end());
        if(v[0]==v.back()) break;
        else {
            for(int i=0;i<v.size()-1;++i)
                ++v[i];
            ++res;
            for(int i=0;i<v.size();++i)
                cout<<v[i]<<" ";cout<<"\n";
        }
    }
    cout<<res;
    return 0;
}