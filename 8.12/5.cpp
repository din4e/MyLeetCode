#include<bits/stdc++.h>
using namespace std;
int T;
int n,m;
vector<vector<char>> mm(51,vector<char>(51)); 
int main(){
    cin>>T;
    fill(mm[0].begin(),mm[0].begin()+51*51,'0');
    while(T--){ 
        cin>>m>>n;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                cin>>mm[i][j];
            }
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                cout<<mm[i][j];
            }cout<<"\n";
        }
    }
    return 0;
}